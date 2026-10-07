
undefined8 FUN_100494cc0(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  *param_4 = 0;
  lVar2 = FUN_1002a6010();
  uVar6 = 0xffffffff;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) - 3U < 2)) {
    if (*(short *)(param_1 + 0x16) == 0) {
      *param_2 = lVar2 + 0x30;
      *param_3 = (ulong)*(uint *)(lVar2 + 0x28) + 0x30 + lVar2;
      uVar6 = 0;
    }
    else {
      lVar3 = FUN_1002a6120(param_1,0,0);
      pvVar4 = _malloc((ulong)*(uint *)(lVar2 + 0x28));
      if (pvVar4 == (void *)0x0) {
        *param_2 = 0;
        uVar5 = (ulong)*(uint *)(lVar2 + 0x28);
        lVar2 = 0;
      }
      else {
        *param_4 = 1;
        if (lVar3 != 0) {
          FUN_1002a5990(lVar3,0,pvVar4,*(undefined4 *)(lVar2 + 0x28));
          uVar1 = *(uint *)(lVar2 + 0x28);
          *(uint *)(lVar3 + 0x10) = uVar1;
          *param_2 = (long)pvVar4;
          *param_3 = (long)pvVar4 + (ulong)uVar1;
          return 0;
        }
        *param_2 = (long)pvVar4;
        uVar5 = (ulong)*(uint *)(lVar2 + 0x28);
        lVar2 = (long)pvVar4 + uVar5;
      }
      *param_3 = lVar2;
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Can\'t allocate memory %d bytes",uVar5);
    }
  }
  return uVar6;
}

