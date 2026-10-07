
undefined8 FUN_1003e2830(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  uint uVar4;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar4 = *(uint *)(param_1 + 0x19), uVar4 == 0xffffffff)) {
    uVar4 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  puVar1 = _malloc(0x22);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 4) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 2) = 0xe;
    *(undefined4 *)((long)puVar1 + 3) = 0x1010101;
    *(undefined4 *)(puVar1 + 2) = 0xffffff00;
    *(undefined4 *)((long)puVar1 + 0x14) = 0xffffff00;
    *(undefined2 *)puVar1 = 0x2000;
    uVar4 = uVar4 & 0xffff;
    sVar3 = 0x22;
    if (uVar4 < 0x23) {
      sVar3 = (ulong)uVar4;
    }
    _memcpy((void *)param_1[9],puVar1,sVar3);
    _free(puVar1);
    (**(code **)(*param_1 + 0x278))(param_1,uVar4,(ulong)uVar4);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e2926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  return uVar2;
}

