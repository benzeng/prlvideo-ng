
bool FUN_10056afc0(uint param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  
  pcVar3 = *(code **)(param_2 + 0x1178);
  bVar1 = true;
  if (pcVar3 != (code *)0x0) {
    if (*(char *)(param_2 + 0x1188) == '\0') {
      bVar1 = false;
    }
    else {
      if ((int)param_1 < 0x3e9) {
        if ((int)param_1 < 0) {
          FUN_1008e3970("","vdisk",0,"Callback caught error 0x%x",param_1);
          pcVar3 = *(code **)(param_2 + 0x1178);
          uVar4 = (ulong)param_1;
        }
        else {
          uVar4 = (ulong)(*(int *)(param_2 + 0x118c) * 1000 + param_1) /
                  (ulong)*(uint *)(param_2 + 0x1190);
        }
      }
      else {
        uVar4 = (ulong)param_1;
      }
      iVar2 = (*pcVar3)(uVar4,1000,*(undefined8 *)(param_2 + 0x1180));
      bVar1 = -1 < (int)param_1 && iVar2 != 0;
      *(bool *)(param_2 + 0x1188) = bVar1;
    }
  }
  return bVar1;
}

