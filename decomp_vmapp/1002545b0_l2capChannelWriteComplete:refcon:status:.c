
/* Function Stack Size: 0x24 bytes */

void BTL2CAPChannelDelegate::l2capChannelWriteComplete_refcon_status_
               (ID param_1,SEL param_2,ID param_3,void *param_4,int param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  
  if (1 < DAT_1011b55f8) {
    uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_PSM_100bed488);
    FUN_1008e3970("","LocalDevices",2,"l2capChannelWriteComplete (PSM:0x%x)",uVar2);
  }
  puVar1 = PTR__objc_msgSend_100ba25e8;
  local_40 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_4,PTR_s_bytes_100bed470);
  local_38 = (*(code *)puVar1)(param_4,PTR_s_length_100bed478);
  local_30 = param_5;
  lVar3 = (*(code *)puVar1)(param_1,PTR_s_cb_100bed4a0);
  if (lVar3 != 0) {
    pcVar4 = (code *)(*(code *)puVar1)(param_1,PTR_s_cb_100bed4a0);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_ctx_100bed4a8);
    (*pcVar4)(3,uVar5,&local_40);
  }
  return;
}

