
void FUN_10026e1f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x48;
  lVar4 = FUN_1002584f0(lVar1);
  if (lVar4 != 0) {
    do {
      iVar2 = *(int *)(lVar4 + 0x18);
      if (iVar2 == 0) {
        if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
          (**(code **)(lVar4 + 0x20))(*(undefined8 *)(lVar4 + 0x28));
          iVar2 = *(int *)(lVar4 + 0x18);
          goto LAB_10026e239;
        }
      }
      else {
LAB_10026e239:
        if (iVar2 == 3) {
          uVar3 = FUN_1003fe450(param_1 + 0xa48,*(undefined8 *)(lVar4 + 0x30),
                                *(undefined8 *)(lVar4 + 0x38));
          *(undefined4 *)(lVar4 + 0x40) = uVar3;
        }
      }
      FUN_100258470(lVar1,lVar4);
      lVar4 = FUN_1002584f0(lVar1);
    } while (lVar4 != 0);
  }
  return;
}

