
undefined8 FUN_100390a60(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined2 local_80;
  ushort uStack_7e;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined2 local_68;
  ushort uStack_66;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puVar6 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  if (puVar1 != puVar6) {
    puVar6 = (undefined8 *)
             ((~((long)puVar1 + (-8 - (long)puVar6)) & 0xfffffffffffffff8U) + (long)puVar1);
    param_3[1] = puVar6;
  }
  uVar3 = param_2 & 0xe;
  if (uVar3 != 0) {
    if ((param_2 & 0x4000) != 0) {
      return 2;
    }
    if (uVar3 == 4) {
      local_38 = 0;
      uStack_36 = 0;
      uStack_34 = 3;
      uStack_33 = 0;
      uStack_32 = 9;
      uStack_31 = 0;
      if (puVar6 == (undefined8 *)param_3[2]) {
        FUN_100340410(param_3,&local_38);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar6 = 0x9000300000000;
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar9 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar9 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
    }
    else {
      local_40 = 0;
      uStack_3e = 0;
      uStack_3c = 2;
      uStack_3b = 0;
      uStack_3a = 0;
      uStack_39 = 0;
      if (puVar6 == (undefined8 *)param_3[2]) {
        FUN_100340410(param_3,&local_40);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar6 = 0x200000000;
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar9 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar9 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
      if ((5 < uVar3) && (uVar3 = uVar3 - 4 >> 1, uVar3 != 0)) {
        uVar8 = (undefined2)uVar9;
        if ((param_2 & 0x1000) == 0) {
          if (3 < uVar3 - 1) {
            return 1;
          }
          local_58 = 0;
          uStack_54 = (undefined1)(uVar3 - 1);
          uStack_53 = 0;
          uStack_52 = 1;
          uStack_51 = 0;
          uStack_56 = uVar8;
          if (puVar7 == (ulong *)param_3[2]) {
            FUN_100340410(param_3,&local_58);
            puVar7 = (ulong *)param_3[1];
          }
          else {
            *puVar7 = (ulong)CONCAT16(1,(uint6)CONCAT12(uStack_54,uVar8) << 0x10);
            puVar7 = (ulong *)(param_3[1] + 8);
            param_3[1] = puVar7;
          }
          uVar3 = 0;
          if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
            uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
          }
          uVar9 = uVar9 + uVar3;
        }
        else {
          if (3 < uVar3 - 2) {
            return 1;
          }
          local_48 = 0;
          uStack_44 = (undefined1)(uVar3 - 2);
          uStack_43 = 0;
          uStack_42 = 1;
          uStack_41 = 0;
          uStack_46 = uVar8;
          if (puVar7 == (ulong *)param_3[2]) {
            FUN_100340410(param_3,&local_48);
            puVar7 = (ulong *)param_3[1];
          }
          else {
            *puVar7 = (ulong)CONCAT16(1,(uint6)CONCAT12(uStack_44,uVar8) << 0x10);
            puVar7 = (ulong *)(param_3[1] + 8);
            param_3[1] = puVar7;
          }
          uVar3 = 0;
          if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
            uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
          }
          iVar4 = uVar3 + uVar9;
          local_50 = 0;
          uStack_4e = (undefined2)iVar4;
          uStack_4c = 5;
          uStack_4b = 0;
          uStack_4a = 2;
          uStack_49 = 0;
          if (puVar7 == (ulong *)param_3[2]) {
            FUN_100340410(param_3,&local_50);
            puVar7 = (ulong *)param_3[1];
          }
          else {
            *puVar7 = (ulong)CONCAT16(2,(uint6)CONCAT14(5,iVar4 * 0x10000));
            puVar7 = (ulong *)(param_3[1] + 8);
            param_3[1] = puVar7;
          }
          uVar9 = 0;
          if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
            uVar9 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
          }
          uVar9 = uVar9 + iVar4;
        }
      }
    }
    if ((param_2 & 0x10) != 0) {
      local_60 = 0;
      uStack_5e = (undefined2)uVar9;
      uStack_5c = 2;
      uStack_5b = 0;
      uStack_5a = 3;
      uStack_59 = 0;
      if (puVar7 == (ulong *)param_3[2]) {
        FUN_100340410(param_3,&local_60);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar7 = (ulong)CONCAT16(3,(uint6)CONCAT14(2,uVar9 << 0x10));
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar3 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
      uVar9 = uVar9 + uVar3;
    }
    if ((param_2 & 0x20) != 0) {
      local_68 = 0;
      uStack_66 = (ushort)uVar9;
      uStack_64 = 0;
      uStack_63 = 0;
      uStack_62 = 4;
      uStack_61 = 0;
      if (puVar7 == (ulong *)param_3[2]) {
        FUN_100340410(param_3,&local_68);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar7 = (ulong)CONCAT16(4,(uint6)uStack_66 << 0x10);
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar3 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
      uVar9 = uVar9 + uVar3;
    }
    if ((param_2 & 0x40) != 0) {
      local_70 = 0;
      uStack_6e = (undefined2)uVar9;
      uStack_6c = 4;
      uStack_6b = 0;
      uStack_6a = 10;
      uStack_69 = 0;
      if (puVar7 == (ulong *)param_3[2]) {
        FUN_100340410(param_3,&local_70);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar7 = (ulong)CONCAT16(10,(uint6)CONCAT14(4,uVar9 << 0x10));
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar3 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
      uVar9 = uVar9 + uVar3;
    }
    if ((param_2 & 0x80) != 0) {
      local_78 = 0;
      uStack_76 = (undefined2)uVar9;
      uStack_74 = 4;
      uStack_73 = 0;
      uStack_72 = 10;
      uStack_71 = 1;
      if (puVar7 == (ulong *)param_3[2]) {
        FUN_100340410(param_3,&local_78);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar7 = CONCAT17(1,CONCAT16(10,(uint6)CONCAT14(4,uVar9 << 0x10)));
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar3 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
      uVar9 = uVar9 + uVar3;
    }
    if ((param_2 & 0x2000) != 0) {
      local_80 = 0;
      uStack_7e = (ushort)uVar9;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0xb;
      uStack_79 = 0;
      if (puVar7 == (ulong *)param_3[2]) {
        FUN_100340410(param_3,&local_80);
        puVar7 = (ulong *)param_3[1];
      }
      else {
        *puVar7 = (ulong)CONCAT16(0xb,(uint6)uStack_7e << 0x10);
        puVar7 = (ulong *)(param_3[1] + 8);
        param_3[1] = puVar7;
      }
      uVar3 = 0;
      if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
        uVar3 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
      }
      uVar9 = uVar9 + uVar3;
    }
    uVar3 = param_2 >> 8 & 0xf;
    if ((param_2 & 0xf00) != 0) {
      if (param_2 < 0x10000) {
        uVar5 = 0;
        do {
          local_90 = 0;
          uStack_8e = (undefined2)uVar9;
          uStack_8c = 1;
          uStack_8b = 0;
          uStack_8a = 5;
          uStack_89 = (undefined1)uVar5;
          if (puVar7 == (ulong *)param_3[2]) {
            FUN_100340410(param_3,&local_90);
            puVar7 = (ulong *)param_3[1];
          }
          else {
            *puVar7 = CONCAT17(uStack_89,CONCAT16(5,(uint6)CONCAT14(1,uVar9 << 0x10)));
            puVar7 = (ulong *)(param_3[1] + 8);
            param_3[1] = puVar7;
          }
          uVar10 = 0;
          if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
            uVar10 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
          }
          uVar9 = uVar9 + uVar10;
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
      }
      else {
        uVar10 = 0;
        uVar5 = 0x10;
        do {
          uVar2 = 3 << ((byte)uVar5 & 0x1f);
          if ((uVar2 & param_2) == uVar2) {
            uStack_84 = 0;
          }
          else {
            uStack_84 = 2;
            if (((param_2 >> (uVar5 & 0x1f) & 1) == 0) &&
               (uVar2 = 2 << ((byte)uVar5 & 0x1f), uStack_84 = 3, (uVar2 & param_2) != uVar2)) {
              uStack_84 = 1;
            }
          }
          local_88 = 0;
          uStack_86 = (undefined2)uVar9;
          uStack_83 = 0;
          uStack_82 = 5;
          uStack_81 = (undefined1)uVar10;
          if (puVar7 == (ulong *)param_3[2]) {
            FUN_100340410(param_3,&local_88);
            puVar7 = (ulong *)param_3[1];
          }
          else {
            *puVar7 = CONCAT17(uStack_81,CONCAT16(5,(uint6)CONCAT12(uStack_84,uStack_86) << 0x10));
            puVar7 = (ulong *)(param_3[1] + 8);
            param_3[1] = puVar7;
          }
          uVar2 = 0;
          if ((ulong)*(byte *)((long)puVar7 + -4) < 0x11) {
            uVar2 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)((long)puVar7 + -4) * 2);
          }
          uVar9 = uVar9 + uVar2;
          uVar10 = uVar10 + 1;
          uVar5 = uVar5 + 2;
        } while (uVar10 < uVar3);
      }
    }
    return 0;
  }
  return 2;
}

