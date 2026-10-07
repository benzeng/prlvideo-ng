
void FUN_10049ea20(long param_1,byte *param_2,char param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  
  if ((*param_2 & 1) == 0) {
    uVar7 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar1) {
    do {
      pbVar2 = (byte *)*puVar5;
      bVar9 = *pbVar2 & 1;
      if (bVar9 == 0) {
        uVar8 = (ulong)(*pbVar2 >> 1);
      }
      else {
        uVar8 = *(ulong *)(pbVar2 + 8);
      }
      if (uVar7 <= uVar8) {
        if (bVar9 == 0) {
          pbVar4 = pbVar2 + 1;
        }
        else {
          pbVar4 = *(byte **)(pbVar2 + 0x10);
        }
        pbVar6 = *(byte **)(param_2 + 0x10);
        if ((*param_2 & 1) == 0) {
          pbVar6 = param_2 + 1;
        }
        iVar3 = _strncmp((char *)pbVar4,(char *)pbVar6,uVar7);
        if (iVar3 == 0) {
          if (uVar8 == uVar7) {
            pbVar2[0x38] = 0;
            if (param_3 == '\0') {
              return;
            }
          }
          else if (param_3 != '\0') {
            if (bVar9 == 0) {
              pbVar4 = pbVar2 + 1;
            }
            else {
              pbVar4 = *(byte **)(pbVar2 + 0x10);
            }
            if (pbVar4[uVar7] == 0x2f) {
              pbVar2[0x38] = 0;
            }
          }
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar1 != puVar5);
  }
  return;
}

