
undefined8 * FUN_1004de680(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  
  lVar1 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (lVar1 == 0) {
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x1f8))(param_2);
    (**(code **)*puVar2)(puVar2);
    pcVar3 = (char *)QMetaObject::className();
    iVar6 = -1;
    pcVar7 = (char *)0x0;
    if (pcVar3 == (char *)0x0) goto LAB_1004de6e0;
  }
  sVar4 = _strlen(pcVar3);
  iVar6 = (int)sVar4;
  pcVar7 = pcVar3;
LAB_1004de6e0:
  uVar5 = QString::fromAscii_helper(pcVar7,iVar6);
  *param_1 = uVar5;
  return param_1;
}

