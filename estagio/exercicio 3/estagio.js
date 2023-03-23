fetch('dados.json')
  .then(response => response.json())
  .then(data => {
    const faturamento = data;

    const valoresFaturamento = faturamento.map(item => item.valor);

    const menorFaturamento = Math.min(...valoresFaturamento);

    const maiorFaturamento = Math.max(...valoresFaturamento);

    const media = valoresFaturamento.reduce((total, quantidade) => total + quantidade) / valoresFaturamento.length;

    const diasAcimaDaMedia = valoresFaturamento.filter(valor => valor > media).length;

    console.log(`Menor faturamento diário: R$ ${menorFaturamento}`);
    console.log(`Maior faturamento diário: R$ ${maiorFaturamento}`);
    console.log(`Numero de dias com faturamento acima da méria mensal: ${diasAcimaDaMedia}`);

  })
  .catch(error => console.log(error));