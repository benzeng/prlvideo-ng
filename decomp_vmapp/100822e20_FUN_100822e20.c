
int FUN_100822e20(uint *param_1,int *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar1 = *param_1;
  iVar4 = uVar1 - *param_2;
  if (iVar4 == 0) {
    iVar4 = 0;
    if (uVar1 < 4) {
      puVar2 = *(undefined8 **)(param_1 + 2);
      puVar3 = *(undefined8 **)(param_2 + 2);
      switch(uVar1) {
      case 0:
        iVar4 = *(int *)((long)puVar2 + 0x14);
        if (iVar4 == *(int *)((long)puVar3 + 0x14)) {
          iVar4 = _memcmp((void *)puVar2[3],(void *)puVar3[3],(long)iVar4);
          return iVar4;
        }
        iVar4 = iVar4 - *(int *)((long)puVar3 + 0x14);
        break;
      case 1:
        iVar4 = -1;
        if ((char *)*puVar2 != (char *)0x0) {
          iVar4 = 1;
          if ((char *)*puVar3 != (char *)0x0) {
            iVar4 = _strcmp((char *)*puVar2,(char *)*puVar3);
            return iVar4;
          }
        }
        break;
      case 2:
        iVar4 = -1;
        if ((char *)puVar2[1] != (char *)0x0) {
          iVar4 = 1;
          if ((char *)puVar3[1] != (char *)0x0) {
            iVar4 = _strcmp((char *)puVar2[1],(char *)puVar3[1]);
            return iVar4;
          }
        }
        break;
      case 3:
        iVar4 = *(int *)(puVar2 + 2) - *(int *)(puVar3 + 2);
      }
    }
  }
  return iVar4;
}

