import React, { useState } from 'react';

function Calculator() {
  // Use o hook useState para gerenciar o estado da calculadora
  const [value, setValue] = useState(0);
  const [lastValue, setLastValue] = useState(null);
  const [operation, setOperation] = useState(null);

  function handleNumberClick(number) {
    // Atualiza o valor da calculadora com o número clicado
    setValue(value * 10 + number);
  }

  function handleOperationClick(op) {
    // Salva o valor atual da calculadora e a operação selecionada
    setLastValue(value);
    setOperation(op);
    setValue(0);
  }

  function handleEqualsClick() {
    // Realiza a operação selecionada com os valores armazenados
    if (operation === '+') {
      setValue(lastValue + value);
    } else if (operation === '-') {
      setValue(lastValue - value);
    } else if (operation === '*') {
      setValue(lastValue * value);
    } else if (operation === '/') {
      setValue(lastValue / value);
    }
  }

  return (
    <div>
      {/* Exibe o valor atual da calculadora na tela */}
      <span>{value}</span>
      <button onClick={() => handleNumberClick(1)}>1</button>
      <button onClick={() => handleNumberClick(2)}>2</button>
      <button onClick={() => handleNumberClick(3)}>3</button>
      <button onClick={() => handleOperationClick('+')}>+
