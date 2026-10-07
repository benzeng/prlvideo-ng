
undefined1 * FUN_100529230(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 *local_40;
  undefined1 local_38 [8];
  
  auVar3._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar3._0_8_ = PTR_shared_null_100ba2180;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar3;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x808);
  uVar1 = 0;
  do {
    for (puVar2 = *(undefined8 **)(param_2 + 8 + uVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      local_40 = puVar2;
      FUN_100529480(param_1 + 0x10,&local_40,local_38);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return param_1;
}

