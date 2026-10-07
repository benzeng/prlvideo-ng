
/* Function Stack Size: 0x28 bytes */

void BTController::setDeviceNameUpdate_callback_context_
               (ID param_1,SEL param_2,const_BluetoothDeviceAddress__ param_3,undefined4 *param_4,
               void *param_5)

{
  long lVar1;
  
  lVar1 = _name_update_addr;
  *(undefined2 *)(param_1 + 4 + _name_update_addr) = *(undefined2 *)(param_3->field0_0x0 + 4);
  *(undefined4 *)(param_1 + lVar1) = *(undefined4 *)param_3->field0_0x0;
  *(undefined4 **)(param_1 + _name_update_cb) = param_4;
  *(void **)(param_1 + _name_update_ctx) = param_5;
  return;
}

