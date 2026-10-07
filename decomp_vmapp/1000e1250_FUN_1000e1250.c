
void FUN_1000e1250(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  string local_48 [24];
  
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  *(int *)(param_2 + 0x14) = iVar1 + 1;
  *(short *)(param_1[1] + 2) = (short)iVar1;
  if ((param_4 != (long *)0x0) && (pcVar3 = (char *)*param_4, pcVar3 != (char *)0x0)) {
    do {
      param_4 = param_4 + 1;
      _strlen(pcVar3);
      std::string::__init((char *)local_48,(ulong)pcVar3);
      if ((string *)param_1[3] == (string *)param_1[4]) {
        FUN_1000e2970(param_1 + 2,local_48);
      }
      else {
        std::string::string((string *)param_1[3],local_48);
        param_1[3] = param_1[3] + 0x18;
      }
      std::string::~string(local_48);
      pcVar3 = (char *)*param_4;
    } while (pcVar3 != (char *)0x0);
  }
  if (*(long *)(param_2 + 8) != 0) {
    uVar2 = FUN_1000e1170(*(long *)(param_2 + 8),*(undefined1 *)param_1[1]);
    *param_1 = uVar2;
  }
  return;
}

