
void FUN_10040deb0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  bool bVar5;
  
  *param_1 = &PTR____cxa_pure_virtual_100bbffa0;
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  *(undefined2 *)(param_1 + 6) = 0x101;
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    puVar3 = param_1 + 2;
    piVar4 = (int *)(param_2 + 0x30);
    do {
      uVar1 = piVar4[-8];
      bVar5 = *piVar4 != 0;
      if ((ulong)uVar1 == 0) {
        *(undefined4 *)puVar3 = 0x3f800000;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x31) = 0;
        if (uVar1 < 0x1f) {
          *(undefined4 *)puVar3 = (&DAT_100b40a90)[uVar1];
        }
        else {
          *(undefined4 *)puVar3 = 0;
          bVar5 = true;
        }
      }
      if (*(char *)(param_1 + 6) == '\0') {
        bVar5 = false;
      }
      *(bool *)(param_1 + 6) = bVar5;
      puVar3 = (undefined8 *)((long)puVar3 + 4);
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_1 = &PTR_FUN_100bc0000;
  return;
}

