
undefined1 FUN_10035b880(long param_1,int *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ulong in_RAX;
  undefined8 uStack_28;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == -1) {
    piVar1 = (int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        cVar2 = (*DAT_1011c7470)(*(undefined4 *)(param_1 + 0x18));
        if (cVar2 == '\0') {
          return 0;
        }
      }
      else {
        iVar3 = (*DAT_1011c7518)(*(long *)(param_1 + 0x10),0,0);
        if (iVar3 == 0x911b) {
          return 0;
        }
      }
      *piVar1 = 1;
      iVar3 = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
        *piVar1 = 0x7fffffff;
        iVar3 = 0x7fffffff;
      }
      else {
        uStack_28 = in_RAX;
        if (param_3 == '\0') {
          uStack_28 = in_RAX & 0xffffffff;
          (*DAT_1011c6130)(iVar3,0x8867,(long)&uStack_28 + 4);
          if (uStack_28._4_4_ == 0) {
            return 0;
          }
          iVar3 = *(int *)(param_1 + 8);
        }
        (*DAT_1011c6130)(iVar3,0x8866,piVar1);
        iVar3 = *piVar1;
      }
    }
  }
  *param_2 = iVar3;
  return 1;
}

