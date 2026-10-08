
void FUN_1005b02a0(QObject *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 < 0x15) {
    switch(param_2) {
    case 5:
      QTimer::singleShot(500,param_1,"1performOperationOnProgress()");
      return;
    case 7:
      lVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      if (*(long **)(lVar2 + 0xb0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0xb0) + 0x20))();
      }
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      break;
    case 8:
      FUN_1005b0490(param_1);
      return;
    case 9:
      FUN_1005b06e0(param_1);
      return;
    case 10:
      local_24 = 0;
      local_28 = 0;
      uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      uVar1 = FUN_1005b86c0(uVar1);
      FUN_100112b70(uVar1,0,&local_24,&local_28);
      uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      FUN_1005b82f0(uVar1,local_24);
      uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      local_90 = 0xff;
      local_8c = 0;
      local_88 = 0;
      local_80._8_4_ = (int)PTR_shared_null_1021e1288;
      local_80._0_8_ = PTR_shared_null_1021e1288;
      local_80._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      local_70._8_4_ = (int)PTR_shared_null_1021e15e8;
      local_70._0_8_ = PTR_shared_null_1021e15e8;
      local_70._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
      local_60 = 0;
      local_58 = PTR_shared_null_1021e1288;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      FUN_1005b8430(uVar1,&local_90);
      FUN_10005e410(&local_90);
    }
  }
  else if (param_2 == 0x15) {
    uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    FUN_1005b86e0(uVar1,&local_20);
  }
  return;
}

