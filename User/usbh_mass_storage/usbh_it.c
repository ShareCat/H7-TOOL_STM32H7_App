/*
*********************************************************************************************************
*
*    ģ������ : USB host�жϷ������
*    �ļ����� : usbh_it.c
*    ��    �� : V1.0
*    ˵    �� : ���ļ����USB host�жϷ������ֻ�轫���ļ����빤�̼��ɣ������ٵ� stm32f4xx_it.c ��������ЩISR����
*
*    �޸ļ�¼ :
*        �汾��  ����        ����     ˵��
*        V1.0    2018-09-08  armfly  ��ʽ����
*
*    Copyright (C), 2018-2030, ���������� www.armfly.com
*
*********************************************************************************************************
*/

#include "usbh_core.h"

extern HCD_HandleTypeDef hhcd;

/*
*********************************************************************************************************
*    �� �� ��: OTG_FS_IRQHandler, OTG_HS_IRQHandler
*    ����˵��: USB HOST�жϷ������
*    ��    ��: ��
*    �� �� ֵ: ��
*********************************************************************************************************
*/
#ifdef USE_USBH_HS
void OTG_HS_IRQHandler(void)
{
    HAL_HCD_IRQHandler(&hhcd);
}
#endif
/***************************** ���������� www.armfly.com (END OF FILE) *********************************/