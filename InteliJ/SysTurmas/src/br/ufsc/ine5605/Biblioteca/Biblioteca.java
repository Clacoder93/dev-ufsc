package br.ufsc.ine5605.Biblioteca;

import java.util.ArrayList;
import java.util.Scanner;

public class Biblioteca {
    private ArrayList<Livro> livros = new ArrayList<Livro>();

    public void incluirLivro(Livro livro) {
        livros.add(livro);
    }

    public void excluirLivro(Livro livro) {
        livros.remove(livro);
    }


}
