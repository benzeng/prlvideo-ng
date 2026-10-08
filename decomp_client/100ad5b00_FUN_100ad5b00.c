
void FUN_100ad5b00(long *param_1,char param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  *(undefined1 *)((long)param_1 + 0xaa6) = 1;
  if (param_2 != '\0') {
    plVar2 = (long *)FUN_100adb590(param_1 + 0x20,(int)param_1[0x122]);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    else {
      if ((*(ushort *)(lVar1 + 0x18) & 0x4010) == 0) {
        if (*(int *)(lVar1 + 0x30) - *(int *)(lVar1 + 0x28) < 0x10) {
          bVar3 = false;
        }
        else {
          bVar3 = 0xf < *(int *)(lVar1 + 0x34) - *(int *)(lVar1 + 0x2c);
        }
      }
      else {
        bVar3 = false;
      }
      FUN_100ae31d0(param_1,*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10),bVar3);
    }
    (**(code **)(*param_1 + 0x110))(param_1,(int)param_1[0x122],0);
    FUN_100adcee0(param_1[0x137]);
    return;
  }
  return;
}

