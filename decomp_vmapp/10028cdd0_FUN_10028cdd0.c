
void FUN_10028cdd0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined2 uVar8;
  ulong uVar9;
  undefined8 local_890 [4];
  undefined8 local_870;
  long local_868;
  undefined8 local_860;
  undefined4 *local_858;
  undefined4 local_850 [2];
  undefined8 local_848;
  long local_40;
  undefined4 local_34;
  undefined8 local_30;
  
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  bVar4 = *(byte *)((long)puVar2 + 6) & 0xf;
  if ((bVar4 < 4) && (bVar4 != 1)) {
    if ((int)DAT_101115ec0 < 0) {
      DAT_101115ec0 = (uint)((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) != 0x800);
    }
    if (DAT_101115ec0 == 0) goto LAB_10028ce28;
    (*(code *)(&PTR_FUN_100bb1070)[bVar4])(param_1);
    switch(*(undefined1 *)puVar2) {
    case 0:
    case 3:
      *(undefined2 *)(param_1 + 0x16) = 0;
      goto LAB_10028ce48;
    case 1:
    case 5:
      if (*(short *)(param_1 + 0xc) == 0) {
        uVar8 = 0;
      }
      else {
        iVar5 = FUN_100288a70((undefined1 *)((long)puVar2 + 0x1c),&local_30,&local_34);
        if (iVar5 < 0) {
          FUN_1008e3970("","LocalDevices",0,"LSI: unsupported sg element");
          uVar8 = 3;
        }
        else {
          local_868 = DAT_1011c3688;
          local_860 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
          local_858 = local_850;
          local_850[0] = 0;
          local_848 = 0;
          FUN_10008d820(&local_868,local_30,local_34,&local_40);
          if (local_40 == 0) {
            uVar8 = 4;
            FUN_1008e3970("","LocalDevices",0,"LSI: couldn\'t map sg element: 0x%08llX(%u)",local_30
                          ,local_34);
          }
          else {
            bVar4 = *(byte *)((long)puVar2 + 0x16);
            bVar1 = *(byte *)((long)puVar2 + 6);
            if (bVar1 == 0x12) {
              uVar8 = 0x22;
              if (((*(uint *)(puVar2 + 3) < 0x30000000) &&
                  (lVar6 = (*(code *)(&PTR_FUN_100bb1050)[*(uint *)(puVar2 + 3) >> 0x1c])(),
                  bVar4 < 3)) && (lVar6 != 0)) {
                (*(code *)(&PTR_FUN_100bb1090)[bVar4])(lVar6,local_40,local_34);
                uVar8 = 0;
              }
            }
            else if (bVar1 == 0x13) {
              uVar7 = *(uint *)(puVar2 + 3);
              uVar8 = 0x22;
              if (uVar7 >> 0x1c == 1) {
                uVar7 = uVar7 & 0xffff;
              }
              else {
                if (uVar7 >> 0x1c != 0) goto LAB_10028d0fd;
                uVar7 = uVar7 & 0xff;
              }
              if ((bVar4 < 2) && (uVar7 < 0x10)) {
                (*(code *)(&PTR_FUN_100bb10b0)[bVar4])
                          (&DAT_1011b9140 + (ulong)uVar7 * 8,local_40,local_34);
                uVar8 = 0;
              }
            }
            else {
              uVar9 = (ulong)(bVar1 & 0xf);
              local_870 = *(undefined8 *)(&DAT_1011b9870 + uVar9 * 0x28);
              local_890[3] = *(undefined8 *)(&DAT_1011b9868 + uVar9 * 0x28);
              local_890[2] = *(undefined8 *)(&DAT_1011b9860 + uVar9 * 0x28);
              local_890[1] = *(undefined8 *)(&DAT_1011b9858 + uVar9 * 0x28);
              local_890[0] = *(undefined8 *)(&DAT_1011b9850 + uVar9 * 0x28);
              if ((code *)local_890[bVar4] == (code *)0x0) {
                uVar8 = 0x22;
                FUN_1008e3970("","LocalDevices",0,
                              "LSI: unsupported extended page number: %02X:0x%02X",uVar9,bVar4);
              }
              else {
                uVar8 = 0;
                (*(code *)local_890[bVar4])(local_40,local_34,0);
              }
            }
          }
LAB_10028d0fd:
          FUN_10008d470(&local_868);
        }
      }
      *(undefined2 *)(param_1 + 0x16) = uVar8;
      goto LAB_10028ce48;
    default:
      FUN_1008e3970("","LocalDevices",0,"LSI: type:0x%02X unsupported page action: 0x%02X",bVar4);
    }
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"LSI: unsupported extended page type: %d",bVar4);
LAB_10028ce28:
    *(undefined8 *)(param_1 + 0x18) = puVar2[2];
    uVar3 = *puVar2;
    *(undefined8 *)(param_1 + 0x10) = puVar2[1];
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  *(undefined2 *)(param_1 + 0x16) = 0x22;
LAB_10028ce48:
  *(undefined1 *)(param_1 + 10) = 6;
  return;
}

