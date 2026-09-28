#include "bsp_usart.hpp"

void USART_Init(void)
{
  USART1_Init();
  USART6_Init();
}

void USART6_Init()
{
  // TODO: 配置 USART6 的 DMA 接收、发送及空闲中断，并启动接收。
};

void USART1_Init()
{
  // TODO: 配置 USART1 的 DMA 接收、发送及空闲中断，并启动接收。
};

void USART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, enum USART_Mode mode)
{
  // TODO: 检查参数，并按 mode 选择阻塞、DMA 或中断发送。
  (void)huart;
  (void)pData;
  (void)Size;
  (void)mode;
}

void USART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  // TODO: 选择接收方式并启动 HAL UART 接收。
  (void)huart;
  (void)pData;
  (void)Size;
}
