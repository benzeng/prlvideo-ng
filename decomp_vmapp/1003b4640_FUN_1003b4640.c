
void * FUN_1003b4640(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  
  pvVar6 = (void *)*param_2;
  if (*(char *)(param_2 + 6) == '\0') {
    uVar1 = *(ushort *)((long)pvVar6 + 0x4c);
    if (uVar1 < 0x1e) {
      if (uVar1 == 1) {
        param_3[2] = param_3[2] + -1;
      }
    }
    else if (uVar1 < 0x2b) {
      switch(uVar1) {
      case 0x1e:
        param_3[5] = param_3[5] + -1;
        break;
      case 0x20:
        param_3[3] = param_3[3] + -1;
        break;
      case 0x22:
        param_3[1] = param_3[1] + -1;
        break;
      case 0x27:
        param_3[4] = param_3[4] + -1;
      }
    }
    else if (uVar1 == 0x2b) {
      param_3[6] = param_3[6] + -1;
    }
    else if (uVar1 == 0x37) {
      param_3[7] = param_3[7] + -1;
    }
    else if (uVar1 == 0x31) {
      *param_3 = *param_3 + -1;
    }
    FUN_1003aab10(pvVar6);
    operator_delete(pvVar6);
    pvVar6 = (void *)0x0;
  }
  else {
    uVar3 = *(uint *)((long)pvVar6 + 0x48);
    if (uVar3 != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar2 = *(long *)((long)pvVar6 + 0x40);
        if (((*(byte *)(lVar2 + 0x39 + lVar4) & 1) == 0) &&
           ((*(byte *)(lVar2 + 0x35 + lVar4) & 5) == 0)) {
          FUN_1003aa7f0(lVar2 + lVar4);
          uVar3 = *(uint *)((long)pvVar6 + 0x48);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x40;
      } while (uVar5 < uVar3);
      pvVar6 = (void *)*param_2;
    }
  }
  return pvVar6;
}

