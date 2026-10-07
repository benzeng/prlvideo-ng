
undefined1 FUN_10049f070(long *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  long *local_38;
  
  plVar6 = (long *)param_1[1];
  local_38 = (long *)param_1[2];
  if (local_38 != plVar6) {
    do {
      pbVar1 = (byte *)*plVar6;
      bVar9 = *pbVar1 & 1;
      if (bVar9 == 0) {
        pbVar8 = pbVar1 + 1;
      }
      else {
        pbVar8 = *(byte **)(pbVar1 + 0x10);
      }
      pbVar7 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar7 = param_2 + 1;
      }
      if (bVar9 == 0) {
        sVar5 = (size_t)(*pbVar1 >> 1);
      }
      else {
        sVar5 = *(size_t *)(pbVar1 + 8);
      }
      iVar3 = _strncmp((char *)pbVar8,(char *)pbVar7,sVar5);
      if (iVar3 == 0) {
        lVar4 = std::string::find((char)param_2,0x2f);
        if (lVar4 == -1) {
          FUN_10000c640(*plVar6 + 0x18,param_2);
          puVar2 = (undefined8 *)*param_1;
          if (puVar2 == (undefined8 *)0x0) {
            return 1;
          }
          (**(code **)*puVar2)(puVar2,0,param_2);
          return 1;
        }
        local_38 = (long *)param_1[2];
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_38);
  }
  return 0;
}

