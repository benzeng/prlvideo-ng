
undefined8 FUN_1000940f0(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10a4) != 0) {
    lVar4 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x96,0);
    if (lVar4 == 0) {
      FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x96,0x10,0x81000,0,0x805);
    }
    lVar4 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x226,0);
    if (lVar4 == 0) {
      FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x226,0x10,0x10000,0,0x803);
    }
    if (*(int *)(*(long *)(param_2 + 0x1d0) + 8) < *(int *)(*(long *)(param_2 + 0x1d0) + 0xc)) {
      iVar7 = 0;
      do {
        puVar5 = (undefined8 *)FUN_100081190((long *)(param_2 + 0x1d0),iVar7);
        uVar6 = *puVar5;
        uVar3 = CVmDevice::getIndex();
        if ((*(uint *)(param_1 + 0x10a4) >> (uVar3 & 0x1f) & 1) != 0) {
          lVar4 = FUN_10025ad30(uVar6);
          uVar6 = 0;
          if (lVar4 != 0) {
            uVar6 = ___dynamic_cast(lVar4,&PTR_vtable_100baea70,&PTR_vtable_100baf980,0x68);
          }
          lVar4 = (long)(int)uVar3;
          *(undefined8 *)(param_1 + 0x1990 + lVar4 * 8) = uVar6;
          cVar2 = FUN_100409070(param_1 + 0x10b0);
          if (cVar2 != '\0') {
            return 0;
          }
          lVar1 = *(long *)(param_1 + 0x1990 + lVar4 * 8);
          *(undefined2 *)(param_1 + 0x3d0 + lVar4 * 0x1c) = *(undefined2 *)(lVar1 + 0x1c0);
          *(undefined4 *)(param_1 + 0x3cc + lVar4 * 0x1c) = *(undefined4 *)(lVar1 + 0x1bc);
        }
        iVar7 = iVar7 + 1;
      } while ((iVar7 < 0x10) &&
              (lVar4 = *(long *)(param_2 + 0x1d0),
              iVar7 < *(int *)(lVar4 + 0xc) - *(int *)(lVar4 + 8)));
    }
    lVar4 = FUN_100272550(param_1 + 0x1990);
    if (lVar4 != 0) {
      FUN_100272610(lVar4);
    }
  }
  return 1;
}

