
undefined8 FUN_100346df0(long param_1,ushort *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar2 = 9;
  if (0x17 < *(uint *)(param_2 + 2)) {
    uVar2 = 4;
    if (*(uint *)(param_2 + 4) < 0x10) {
      uVar1 = *(uint *)(param_2 + 6);
      lVar3 = 0;
      uVar5 = 0;
      if (uVar1 == 0) {
LAB_100346e7f:
        uVar2 = 5;
        if ((*(uint *)(param_2 + 8) <= uVar5) &&
           (*(uint *)(param_2 + 10) <= uVar5 - *(uint *)(param_2 + 8))) {
          FUN_100344580(param_1,*param_2 - 0x5b,*(uint *)(param_2 + 4),lVar3);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 7;
        for (puVar4 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                                (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
            puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
          if (*puVar4 == uVar1) {
            if (*(long *)(puVar4 + 2) == 0) {
              return 7;
            }
            lVar3 = *(long *)(*(long *)(puVar4 + 2) + 8);
            uVar5 = *(uint *)(lVar3 + 0xc);
            goto LAB_100346e7f;
          }
        }
      }
    }
  }
  return uVar2;
}

