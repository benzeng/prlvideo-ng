
/* Function Stack Size: 0x1c bytes */

void BTL2CAPChannelDelegate::l2capChannelOpenComplete_status_
               (ID param_1,SEL param_2,ID param_3,int param_4)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  if (1 < DAT_1011b55f8) {
    uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_PSM_100bed488);
    FUN_1008e3970("","LocalDevices",2,"l2capChannelOpenComplete (PSM:0x%x, ERR:0x%x)",uVar2,param_4)
    ;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = param_4;
  lVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_cb_100bed4a0);
  if (lVar4 != 0) {
    iVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_flags_100bed490);
    puVar1 = PTR__objc_msgSend_100ba25e8;
    if ((param_4 != 0) || (iVar3 == 3)) {
      pcVar5 = (code *)(*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_cb_100bed4a0);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_ctx_100bed4a8);
      (*pcVar5)(0,uVar6,&local_38);
    }
  }
  return;
}

