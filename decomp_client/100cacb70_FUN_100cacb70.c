
undefined8 FUN_100cacb70(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  size_t sVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  
  puVar1 = PTR___DefaultRuneLocale_1021e1278;
  if (param_1 == (byte *)0x0) {
    FUN_100c62ee0(0xe,0x77,0x73,"conf_mod.c",0x237);
    uVar6 = 0;
  }
  else {
    do {
      if (param_3 != 0) {
        bVar2 = *param_1;
        while (bVar2 != 0) {
          if ((char)bVar2 < '\0') {
            uVar3 = ___maskrune((uint)bVar2,0x4000);
          }
          else {
            uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
          }
          if (uVar3 == 0) break;
          pbVar4 = param_1 + 1;
          param_1 = param_1 + 1;
          bVar2 = *pbVar4;
        }
      }
      pbVar4 = (byte *)_strchr((char *)param_1,param_2);
      if ((pbVar4 == param_1) || (*param_1 == 0)) {
        param_1 = (byte *)0x0;
        iVar7 = 0;
      }
      else {
        if (pbVar4 == (byte *)0x0) {
          sVar5 = _strlen((char *)param_1);
          pbVar8 = param_1 + (sVar5 - 1);
        }
        else {
          pbVar8 = pbVar4 + -1;
        }
        if (param_3 != 0) {
          pbVar8 = pbVar8 + 1;
          do {
            bVar2 = pbVar8[-1];
            if ((char)bVar2 < '\0') {
              uVar3 = ___maskrune((uint)bVar2,0x4000);
            }
            else {
              uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
            }
            pbVar8 = pbVar8 + -1;
          } while (uVar3 != 0);
        }
        iVar7 = (int)pbVar8 + (1 - (int)param_1);
      }
      uVar6 = (*param_4)(param_1,iVar7,param_5);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
      uVar6 = 1;
      param_1 = pbVar4 + 1;
    } while (pbVar4 != (byte *)0x0);
  }
  return uVar6;
}

