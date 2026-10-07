
/* Function Stack Size: 0x18 bytes */

void BTL2CAPChannelDelegate::l2capChannelClosed_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (1 < DAT_1011b55f8) {
    uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_PSM_100bed488);
    FUN_1008e3970("","LocalDevices",2,"l2capChannelClosed (PSM:0x%x)",uVar2);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_cb_100bed4a0);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (lVar3 != 0) {
    pcVar4 = (code *)(*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_cb_100bed4a0);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_ctx_100bed4a8);
    (*pcVar4)(1,uVar5,&local_38);
  }
  return;
}

