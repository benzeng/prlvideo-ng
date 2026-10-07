
void FUN_1002b4a40(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  
  *(long *)(param_1[6] + 0xf0) = *(long *)(param_1[6] + 0xf0) + 1;
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 == '\0') {
    if (DAT_1011b55f8 < 1) goto LAB_1002b4b7e;
    lVar10 = param_1[3];
    pcVar8 = "[%s] monitor not ready";
  }
  else {
    pbVar5 = (byte *)FUN_10061ba20(param_2);
    if ((*pbVar5 == 0) && (1 < DAT_1011b55f8)) {
      lVar10 = param_1[3];
      uVar6 = FUN_10061bb00(param_2);
      uVar7 = FUN_10061bb40(param_3);
      FUN_1008e3970("","LocalDevices",2,"[%s] send_key(%d) %s %s with empty scancode!",lVar10,
                    param_2,uVar6,uVar7);
    }
    lVar10 = *(long *)(DAT_1011c3698 + 0x1938);
    uVar9 = *(uint *)(lVar10 + 0x3199c);
    iVar1 = *(int *)(lVar10 + 0x31998);
    uVar4 = FUN_10061bad0(pbVar5);
    if (uVar4 <= 0x100 - (uVar9 - iVar1 & 0xff)) {
      bVar3 = *pbVar5;
      while (bVar3 != 0) {
        pbVar5 = pbVar5 + 1;
        if (param_3 == 0x80) {
          bVar3 = bVar3 | 0x80;
        }
        *(byte *)(lVar10 + 0x31898 + (ulong)uVar9) = bVar3;
        uVar9 = uVar9 + 1 & 0xff;
        bVar3 = *pbVar5;
      }
      *(uint *)(lVar10 + 0x3199c) = uVar9;
      FUN_1002effe0(param_1[0x20d9]);
      return;
    }
    if (DAT_1011b55f8 < 1) goto LAB_1002b4b7e;
    lVar10 = param_1[3];
    pcVar8 = "[%s] buffer full (guest hang?)";
  }
  FUN_1008e3970("","LocalDevices",1,pcVar8,lVar10);
LAB_1002b4b7e:
  *(long *)(param_1[7] + 0xf0) = *(long *)(param_1[7] + 0xf0) + 1;
  return;
}

