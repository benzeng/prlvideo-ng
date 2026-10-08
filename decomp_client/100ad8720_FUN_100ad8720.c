
void FUN_100ad8720(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 local_30;
  
  local_30 = param_3;
  cVar2 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar2 != '\0') {
    plVar4 = (long *)FUN_100adb590(param_1 + 0x100,param_4);
    lVar1 = *plVar4;
    if ((lVar1 != 0) &&
       ((*(int *)(lVar1 + 0x3c) != (int)((ulong)param_3 >> 0x20) ||
        (*(int *)(lVar1 + 0x38) != (int)param_3)))) {
      *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x38) = param_3;
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
      FUN_100ace6b0(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(lVar1 + 8),bVar3,param_2);
      FUN_100ad1890(param_1,lVar1,&local_30);
      if ((*(int *)(lVar1 + 8) == *(int *)(param_1 + 0x910)) &&
         ((*(char *)(*(long *)(param_1 + 0xa30) + 0x10) != '\0' ||
          (*(char *)(param_1 + 0xaa6) != '\0')))) {
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
        FUN_100ae31d0(param_1,*(int *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10),bVar3);
        return;
      }
    }
  }
  return;
}

