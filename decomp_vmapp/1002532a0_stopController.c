
/* Function Stack Size: 0x10 bytes */

int BTController::stopController(ID param_1,SEL param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = _result;
  *(undefined4 *)(param_1 + _result) = 0xe00002cd;
  iVar2 = stopInquiry(param_1,PTR_s_stopInquiry_100bed3b0);
  *(int *)(param_1 + lVar1) = iVar2;
  *(undefined8 *)(param_1 + _inquiry_cb) = 0;
  *(undefined8 *)(param_1 + _inquiry_ctx) = 0;
  *(undefined8 *)(param_1 + _pairing_cb) = 0;
  *(undefined8 *)(param_1 + _pairing_ctx) = 0;
  *(undefined8 *)(param_1 + _name_update_cb) = 0;
  *(undefined8 *)(param_1 + _name_update_ctx) = 0;
  *(undefined1 *)(param_1 + _name_update_in_progress) = 0;
  return *(int *)(param_1 + lVar1);
}

