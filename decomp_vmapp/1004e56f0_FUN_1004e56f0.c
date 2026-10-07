
undefined8 FUN_1004e56f0(long param_1,byte *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte unaff_R12B;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  if (DAT_1011bc0b4 == 0) {
LAB_1004e5af0:
    bVar2 = false;
  }
  else {
    iVar6 = DAT_1011bc0b4;
    if (iVar1 != DAT_1011bc0b0 || iVar3 != DAT_1011bc0ac) {
      if (DAT_1011bc0c0 == 0) goto LAB_1004e5af0;
      iVar6 = DAT_1011bc0c0;
      if (iVar1 != DAT_1011bc0bc || iVar3 != DAT_1011bc0b8) {
        if (DAT_1011bc0cc == 0) goto LAB_1004e5af0;
        iVar6 = DAT_1011bc0cc;
        if (iVar1 != DAT_1011bc0c8 || iVar3 != DAT_1011bc0c4) {
          if (DAT_1011bc0d8 == 0) goto LAB_1004e5af0;
          iVar6 = DAT_1011bc0d8;
          if (iVar1 != DAT_1011bc0d4 || iVar3 != DAT_1011bc0d0) {
            if (DAT_1011bc0e4 == 0) goto LAB_1004e5af0;
            iVar6 = DAT_1011bc0e4;
            if (iVar1 != DAT_1011bc0e0 || iVar3 != DAT_1011bc0dc) {
              if (DAT_1011bc0f0 == 0) goto LAB_1004e5af0;
              iVar6 = DAT_1011bc0f0;
              if (iVar1 != DAT_1011bc0ec || iVar3 != DAT_1011bc0e8) {
                if (DAT_1011bc0fc == 0) goto LAB_1004e5af0;
                iVar6 = DAT_1011bc0fc;
                if (iVar1 != DAT_1011bc0f8 || iVar3 != DAT_1011bc0f4) {
                  if (DAT_1011bc108 == 0) goto LAB_1004e5af0;
                  iVar6 = DAT_1011bc108;
                  if (iVar1 != DAT_1011bc104 || iVar3 != DAT_1011bc100) {
                    if (DAT_1011bc114 == 0) goto LAB_1004e5af0;
                    iVar6 = DAT_1011bc114;
                    if (iVar1 != DAT_1011bc110 || iVar3 != DAT_1011bc10c) {
                      if (DAT_1011bc120 == 0) goto LAB_1004e5af0;
                      iVar6 = DAT_1011bc120;
                      if (iVar1 != DAT_1011bc11c || iVar3 != DAT_1011bc118) {
                        if (DAT_1011bc12c == 0) goto LAB_1004e5af0;
                        iVar6 = DAT_1011bc12c;
                        if (iVar1 != DAT_1011bc128 || iVar3 != DAT_1011bc124) {
                          if (DAT_1011bc138 == 0) goto LAB_1004e5af0;
                          iVar6 = DAT_1011bc138;
                          if (iVar1 != DAT_1011bc134 || iVar3 != DAT_1011bc130) {
                            if (DAT_1011bc144 == 0) goto LAB_1004e5af0;
                            iVar6 = DAT_1011bc144;
                            if (iVar1 != DAT_1011bc140 || iVar3 != DAT_1011bc13c) {
                              if (DAT_1011bc150 == 0) goto LAB_1004e5af0;
                              iVar6 = DAT_1011bc150;
                              if (iVar1 != DAT_1011bc14c || iVar3 != DAT_1011bc148) {
                                if (DAT_1011bc15c == 0) {
                                  bVar2 = false;
                                  goto LAB_1004e5af2;
                                }
                                iVar6 = DAT_1011bc168;
                                if (iVar1 == DAT_1011bc158 && iVar3 == DAT_1011bc154) {
                                  iVar6 = DAT_1011bc15c;
                                }
                                if ((iVar1 != DAT_1011bc158 || iVar3 != DAT_1011bc154) &&
                                    (iVar1 != DAT_1011bc164 ||
                                    (iVar3 != DAT_1011bc160 || DAT_1011bc168 == 0)))
                                goto LAB_1004e5af0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    unaff_R12B = iVar6 == 1;
    bVar2 = true;
  }
LAB_1004e5af2:
  if (bVar2) {
    *param_2 = unaff_R12B;
  }
  else {
    local_38 = DAT_100b453f8;
    local_40 = DAT_100b453f0;
    local_48 = DAT_100b453e8;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    iVar3 = _getattrlist((char *)(param_1 + 0x58),&local_48,&local_78,0x24,5);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    if (0x24 < (uint)local_78) {
      piVar5 = ___error();
      *piVar5 = 0x22;
      return 0xffffffff;
    }
    if ((local_68 & 0x10000000000) == 0) {
      piVar5 = ___error();
      *piVar5 = 0x2d;
      return 0xffffffff;
    }
    LOCK();
    UNLOCK();
    uVar4 = DAT_1011bc0a8 & 0xf;
    DAT_1011bc0a8 = DAT_1011bc0a8 + 1;
    *(undefined8 *)(&DAT_1011bc0ac + (ulong)uVar4 * 3) = *(undefined8 *)(param_1 + 0x30);
    (&DAT_1011bc0b4)[(ulong)uVar4 * 3] = 2 - (local_78._4_4_ >> 8 & 1);
    *param_2 = (byte)((ulong)local_78 >> 0x28) & 1;
  }
  return 0;
}

