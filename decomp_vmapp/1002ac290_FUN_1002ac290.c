
void FUN_1002ac290(long *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar9;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar3 = DAT_1011c4a88;
  uVar9 = (uint)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  uVar8 = (ulong)param_2;
  local_38 = DAT_100b37988;
  local_40 = DAT_100b37980;
  local_50 = 0;
  lVar7 = uVar8 * 0x8f0;
  local_48 = (undefined4)param_1[uVar8 * 0x11e + 0x127];
  local_44 = *(undefined4 *)((long)param_1 + lVar7 + 0x93c);
  if (*(char *)((long)param_1 + lVar7 + 0x9dc) != '\0') {
    lVar5 = param_1[uVar8 * 0x11e + 0x137];
    if (lVar5 != 0) {
      if (DAT_1011c4a88 != lVar5) {
        DAT_1011c4a88 = lVar5;
        _CGLSetCurrentContext();
      }
      local_60 = *(int *)((long)param_1 + lVar7 + 0x9a4);
      local_5c = (int)param_1[uVar8 * 0x11e + 0x135];
      local_58 = local_60 + *(int *)((long)param_1 + lVar7 + 0x99c);
      local_54 = local_5c + (int)param_1[uVar8 * 0x11e + 0x134];
      iVar2 = *(int *)((long)param_1 + lVar7 + 0x9cc);
      if (param_1[uVar8 * 0x11e + 0x138] != 0) {
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)((long)param_1 + lVar7 + 0x9cc);
          (*DAT_1011c5e48)(1,puVar1);
          (*DAT_1011c5738)(0x8ca8,0);
          (*DAT_1011c5738)(0x8ca9,*puVar1);
          (*DAT_1011c5e90)(1,param_1 + uVar8 * 0x11e + 0x139);
          (*DAT_1011c5768)(0x84f5,(int)param_1[uVar8 * 0x11e + 0x139]);
          (*DAT_1011c6cd8)(0x84f5,0x2800,0x2600);
          (*DAT_1011c6cd8)(0x84f5,0x2801,0x2600);
          (*DAT_1011c6cd8)(0x84f5,0x2802,0x812f);
          (*DAT_1011c6cd8)(0x84f5,0x2803,0x812f);
          _CGLTexImageIOSurface2D
                    (param_1[uVar8 * 0x11e + 0x137],0x84f5,0x8058,
                     *(undefined4 *)((long)param_1 + lVar7 + 0x9ac),
                     (int)param_1[uVar8 * 0x11e + 0x136],0x80e1,0x8367,
                     param_1[uVar8 * 0x11e + 0x138],(ulong)uVar9 << 0x20);
          (*DAT_1011c5de8)(0x8ca9,0x8ce0,0x84f5,(int)param_1[uVar8 * 0x11e + 0x139],0);
          (*DAT_1011c5de8)(0x8ca9,0x821a,0x84f5,0,0);
          (*DAT_1011c5c00)(0x8ce0);
          iVar4 = (*DAT_1011c5808)(0x8d40);
          if (iVar4 != 0x8cd5) {
            FUN_1008e3970("","LocalDevices",0,"Failed to initialize FBO for IOTexture (status=%d)");
          }
        }
        else {
          (*DAT_1011c5738)(0x8ca9,iVar2);
          (*DAT_1011c5c00)(0x8ce0);
        }
        lVar5 = FUN_1007d87f0();
        if (((char)param_1[uVar8 * 0x11e + 0x13f] == '\0') &&
           (uVar6 = lVar5 - param_1[uVar8 * 0x11e + 0x140], uVar6 < 0x411a)) {
          _usleep(0x411a - (int)uVar6);
          lVar5 = FUN_1007d87f0();
        }
        param_1[uVar8 * 0x11e + 0x140] = lVar5;
        (*DAT_1011c72d0)(0,0,*(undefined4 *)((long)param_1 + lVar7 + 0x9ac),
                         (int)param_1[uVar8 * 0x11e + 0x136]);
      }
      FUN_1002b0580(param_1,(int)param_1[uVar8 * 0x11e + 0x13a],0xde1,
                    (int)param_1[uVar8 * 0x11e + 0x13c],&local_60,0,0,&local_40,&local_50,1,param_3,
                    0);
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
      FUN_1002b09a0(param_1,param_2,param_3);
      lVar7 = param_1[uVar8 * 0x11e + 0x138];
      if (lVar7 != 0) {
        if (iVar2 == 0) {
          _IOSurfaceSetValue(lVar7,&cf_Inited,*(undefined8 *)PTR__kCFBooleanTrue_100ba23c8);
        }
        (*DAT_1011c5738)(0x8ca9,0);
        (*DAT_1011c5c00)(0x405);
      }
      if (DAT_1011c4a88 != lVar3) {
        DAT_1011c4a88 = lVar3;
        _CGLSetCurrentContext(lVar3);
      }
    }
    if ((char)param_1[0x10e] != '\0') {
      FUN_1004b2af0(DAT_1011cc7f0,param_2,(int)param_1[uVar8 * 0x11e + 0x13a],0xde1,&local_40,
                    &local_50,1,param_3);
    }
  }
  return;
}

