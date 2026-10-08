
undefined1 FUN_1009d91a0(int *param_1,uint param_2,int param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  ssize_t sVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  
  puVar7 = *(uint **)(param_1 + 2);
  if (puVar7 == (uint *)0x0) {
    sVar3 = _pread(*param_1,&local_34,4,0);
    if (sVar3 != 4) {
      return 0;
    }
LAB_1009d9211:
    *param_4 = 4;
    if ((int)local_34 < -0x1120532) {
      if ((int)local_34 < -0x31051202) {
        if ((local_34 != 0xbebafeca) && (local_34 != 0xcafebabe)) {
          return 0;
        }
        *param_4 = 0;
        puVar7 = *(uint **)(param_1 + 2);
        if (puVar7 == (uint *)0x0) {
          sVar3 = _pread(*param_1,&local_58,8,0);
          if (sVar3 != 8) {
            return 0;
          }
LAB_1009d9377:
          FUN_1009d8e00(&local_58);
          uVar4 = *param_4 + 8;
          *param_4 = uVar4;
          uVar9 = 0;
          if (local_58._4_4_ == 0) {
            return 0;
          }
          do {
            lVar1 = *(long *)(param_1 + 2);
            if (lVar1 == 0) {
              sVar3 = _pread(*param_1,&local_70,0x14,uVar4);
              if (sVar3 != 0x14) {
                return 0;
              }
            }
            else {
              if ((long)uVar4 < 0) {
                return 0;
              }
              uVar2 = *(ulong *)(param_1 + 4);
              if (uVar2 < uVar4 + 0x14) {
                uVar5 = uVar2 - uVar4;
                if (uVar2 < uVar4 || uVar5 == 0) {
                  return 0;
                }
                puVar7 = (uint *)(lVar1 + uVar4);
                puVar8 = (uint *)&local_70;
                goto LAB_1009d92af;
              }
              local_60 = *(undefined4 *)(lVar1 + 0x10 + uVar4);
              local_70 = *(undefined8 *)(lVar1 + uVar4);
              local_68 = *(ulong *)(lVar1 + 8 + uVar4);
            }
            FUN_1009d8e20(&local_70,1);
            if (((uint)local_70 == param_2) && ((param_3 == -1 || (local_70._4_4_ == param_3)))) {
              *param_4 = local_68 & 0xffffffff;
              return 1;
            }
            uVar4 = *param_4 + 0x14;
            *param_4 = uVar4;
            uVar9 = uVar9 + 1;
            if (local_58._4_4_ <= uVar9) {
              return 0;
            }
          } while( true );
        }
        uVar5 = *(ulong *)(param_1 + 4);
        if (7 < uVar5) {
          local_58 = *(undefined8 *)puVar7;
          goto LAB_1009d9377;
        }
        if (uVar5 == 0) {
          return 0;
        }
        puVar8 = (uint *)&local_58;
        goto LAB_1009d92af;
      }
      if ((local_34 != 0xcefaedfe) && (local_34 != 0xcffaedfe)) {
        return 0;
      }
    }
    else if (1 < local_34 + 0x1120532) {
      return 0;
    }
    puVar7 = *(uint **)(param_1 + 2);
    if (puVar7 == (uint *)0x0) {
      sVar3 = _pread(*param_1,&local_50,0x1c,0);
      if (sVar3 != 0x1c) {
        return 0;
      }
    }
    else {
      uVar5 = *(ulong *)(param_1 + 4);
      if (uVar5 < 0x1c) {
        if (uVar5 == 0) {
          return 0;
        }
        puVar8 = (uint *)&local_50;
        goto LAB_1009d92af;
      }
      local_38 = puVar7[6];
      local_40 = *(undefined8 *)(puVar7 + 4);
      local_50 = *(undefined8 *)puVar7;
      local_48 = *(undefined8 *)(puVar7 + 2);
    }
    if ((local_34 & 0xfeffffff) == 0xcefaedfe) {
      FUN_1009d8e60(&local_50);
    }
    if (local_50._4_4_ == param_2) {
      if ((param_3 == -1) || ((int)local_48 == param_3)) {
        *param_4 = 0;
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 4);
    if (3 < uVar5) {
      local_34 = *puVar7;
      goto LAB_1009d9211;
    }
    if (uVar5 == 0) {
      return 0;
    }
    puVar8 = &local_34;
LAB_1009d92af:
    _memcpy(puVar8,puVar7,uVar5);
    uVar6 = 0;
  }
  return uVar6;
}

