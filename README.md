# drarquivos
Você possivelmente já usou um serviço de nuvem, porém, a maioria acaba sendo pago e quando são gratuitos, o serviço é lento e bem ruim. Para isso o drarquivos foi criado.
A linguagem usada foi o C++ por ser uma linguagem rápida, já que a hospedagem desse serviço será em um TVBox que possui 1gb de memória ram.

# Versão 0.6.0 - Desenvolvimento - Versão mais recente
Na versão atual, não considero que o sistema ainda está pronto. Atualmente, depois de baixar e rodar o projeto, será dado uma espécie de "pwd" e o site listará todos os arquivos do diretório "/build". Ainda não há como navegar entre os diretórios, porém, você conseguirá baixar os arquivos disponíveis dentro do diretório "/build". O arquivo virá sem extensão, em alguns casos, como o ".pdf", por exemplo, é só abrir o arquivo. Alguns arquivos, como o ".docx", será necessário renomear o arquivo e adicionar ".docx" ao final do arquivo.

# Captura de Tela
<table>
    <tr>
        <td>Tela inicial</td>
    </tr>
    <tr>
        <td><img src="/capturasDeTela/1.png" width="400"></td>
    </tr>
</table>

# Instalação
**Linguagem**: C++<br>
**Framework**: Drogon<br>
Sistema que utiliza APT:

##### Abra o terminal
- Baixe o projeto e entre no diretório
> $ git clone https://github.com/murilopbs/drarquivos && cd drarquivos
- Instale os requisitos
> $ sudo apt install git gcc g++ cmake libjsoncpp-dev uuid-dev openssl libssl-dev zlib1g-dev
> - Baixe o Framework
> $ git clone https://github.com/an-tao/drogon && cd drogon
- Baixe os submódulos
> $ git submodule update --init
- Crie uma pasta para o build
> $ mkdir build
- Entre na pasta
> $ cd build
- Compile
> $ cmake .. && $ make && sudo make install
- Entre no diretório build, compile, gere o executável e rode o programa
- Entre no build dentro do diretório drarquivos
> $ cd build && cmake .. && make && ./drarquivos
- Agora é só digitar no seu navegador o endereço 127.0.0.1:5055/principal

# Contato
Gostou do projeto? Possui alguma dúvida ou quer contribuir? Mande um email para: murilopbsouto@gmail.com
