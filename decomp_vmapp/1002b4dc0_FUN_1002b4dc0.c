
void FUN_1002b4dc0(long *param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  char cVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  bool bVar10;
  undefined8 local_38;
  
  *(long *)(param_1[6] + 0xf0) = *(long *)(param_1[6] + 0xf0) + 1;
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"[%s] monitor not ready",param_1[3]);
    }
    *(long *)(param_1[7] + 0xf0) = *(long *)(param_1[7] + 0xf0) + 1;
    return;
  }
  pbVar3 = (byte *)FUN_10061bae0(param_2);
  if (((*pbVar3 == 0) && (pbVar3[1] == 0)) && (1 < DAT_1011b55f8)) {
    lVar1 = param_1[3];
    uVar4 = FUN_10061bb00(param_2);
    uVar5 = FUN_10061bb40(param_3);
    FUN_1008e3970("","LocalDevices",2,"[%s] send_key(%d) %s %s with empty scancode!",lVar1,param_2,
                  uVar4,uVar5);
  }
  uVar4 = *(undefined8 *)((long)param_1 + 0x106c1);
  if (param_3 == 0x80) {
    bVar6 = ~*pbVar3 & (byte)uVar4;
  }
  else {
    bVar6 = *pbVar3 | (byte)uVar4;
  }
  local_38 = CONCAT71((int7)((ulong)uVar4 >> 8),bVar6);
  uVar5 = local_38;
  if (pbVar3[1] != 0) {
    uVar8 = 0;
    cVar2 = (char)((ulong)uVar4 >> 0x10);
    if (cVar2 != '\0') {
      bVar10 = ((uint)((ulong)uVar4 >> 0x10) & 0xff) != (uint)pbVar3[1];
      if (bVar10) {
        local_38._3_5_ = (undefined5)((ulong)uVar4 >> 0x18);
        local_38._0_3_ = CONCAT12(cVar2,(short)uVar5);
      }
      uVar9 = (ulong)bVar10;
      uVar7 = 1;
      cVar2 = (char)((ulong)uVar4 >> 0x18);
      if (cVar2 == '\0') {
LAB_1002b4fbf:
        uVar8 = (uint)uVar9;
        if (uVar7 <= uVar8) goto LAB_1002b4fdc;
      }
      else {
        if (((uint)((ulong)uVar4 >> 0x18) & 0xff) == (uint)pbVar3[1]) {
          bVar6 = (byte)((ulong)uVar4 >> 0x20);
        }
        else {
          *(char *)(((ulong)&local_38 | uVar9) + 2) = cVar2;
          uVar9 = (ulong)(bVar10 + 1);
          bVar6 = local_38._4_1_;
        }
        uVar7 = 2;
        if (bVar6 == 0) goto LAB_1002b4fbf;
        if (bVar6 != pbVar3[1]) {
          *(byte *)((long)&local_38 + (long)(int)uVar9 + 2) = bVar6;
          uVar9 = (ulong)((int)uVar9 + 1);
        }
        uVar7 = 3;
        if (local_38._5_1_ == 0) goto LAB_1002b4fbf;
        if (local_38._5_1_ != pbVar3[1]) {
          *(byte *)((long)&local_38 + (long)(int)uVar9 + 2) = local_38._5_1_;
          uVar9 = (ulong)((int)uVar9 + 1);
        }
        uVar8 = (uint)uVar9;
        uVar7 = 4;
        if (local_38._6_1_ == 0) goto LAB_1002b4fbf;
        uVar7 = 5;
        if (local_38._6_1_ != pbVar3[1]) {
          *(byte *)((long)&local_38 + (long)(int)uVar8 + 2) = local_38._6_1_;
          uVar9 = (ulong)(uVar8 + 1);
          uVar7 = 5;
          goto LAB_1002b4fbf;
        }
      }
      ___bzero((long)&local_38 + (long)(int)uVar8 + 2,(ulong)((uVar7 - 1) - uVar8) + 1);
    }
LAB_1002b4fdc:
    if (param_3 != 0x80) {
      if (4 < uVar8) {
        local_38 = 0x101010101010101;
        goto LAB_1002b5022;
      }
      *(byte *)((long)&local_38 + (long)(int)uVar8 + 2) = pbVar3[1];
    }
  }
  if (pbVar3[2] == 0) {
    *(undefined8 *)((long)param_1 + 0x106c1) = local_38;
  }
LAB_1002b5022:
  (**(code **)(*(long *)param_1[0x20db] + 0xb0))((long *)param_1[0x20db],&local_38,8,0x81);
  if (pbVar3[2] != 0) {
    (**(code **)(*(long *)param_1[0x20db] + 0xb0))
              ((long *)param_1[0x20db],(undefined8 *)((long)param_1 + 0x106c1),8,0x81);
  }
  return;
}

