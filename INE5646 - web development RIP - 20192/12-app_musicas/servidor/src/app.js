import https from 'https'
import fs from 'fs'
import path from 'path'

import express from 'express'

import {topArtistas} from './pesquisas'
import { PORTA } from './env'

const opcoes = {
  key: fs.readFileSync(path.resolve(__dirname, '../cert/key.pem')),
  cert: fs.readFileSync(path.resolve(__dirname, '../cert/cert.pem'))
}

const app = express()
app.use(express.static(path.resolve(__dirname, '../publico')))

app.get('/topArtistas', (_, res) => {
  topArtistas()
    .then(resposta => res.json(resposta))
    .catch(resposta => res.json(resposta))
})

const server = https.createServer(opcoes, app)

// eslint-disable-next-line no-console
server.listen(PORTA, () => console.log(`No ar, HTTPS porta ${PORTA}`))
