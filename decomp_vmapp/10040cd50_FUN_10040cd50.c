
void FUN_10040cd50(long param_1,byte *param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 local_80 [2];
  undefined4 local_78;
  int local_74;
  void *local_70;
  undefined1 local_68 [12];
  uint local_5c;
  void *local_58;
  undefined4 local_50 [3];
  uint local_44;
  void *local_40;
  uint local_34;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (param_6 == 0) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x44);
  }
  else {
    if (param_5 == 0) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x60);
    cVar2 = *(char *)(param_1 + 0x44);
    if (plVar1 != (long *)0x0) {
      local_34 = param_5;
      if (cVar2 != '\0') {
        (**(code **)*plVar1)(plVar1,&local_34,local_50,local_68);
        uVar7 = local_44;
        uVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
        puVar9 = local_50;
        if (uVar7 / uVar3 < param_5) {
          uVar7 = *(uint *)(param_1 + 0x58);
          if (uVar7 < param_5) {
            if ((uVar7 != 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
              operator_delete__(*(void **)(param_1 + 0x50));
            }
            *(uint *)(param_1 + 0x58) = param_5;
            iVar4 = *(int *)(param_1 + 0x20);
            local_70 = operator_new__((ulong)(iVar4 * param_5));
            *(void **)(param_1 + 0x50) = local_70;
            uVar7 = param_5;
          }
          else {
            local_70 = *(void **)(param_1 + 0x50);
            iVar4 = *(int *)(param_1 + 0x20);
          }
          local_80[0] = 1;
          local_78 = *(undefined4 *)(param_1 + 0x24);
          local_74 = iVar4 * uVar7;
          puVar9 = local_80;
        }
        iVar4 = _AudioUnitRender(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4,param_5,
                                 puVar9);
        if (iVar4 != 0) {
          iVar5 = FUN_1008e38f0(&DAT_101119cb8);
          if (iVar5 == 0) {
            return;
          }
          FUN_1008e3970("","PrlAudioCore",0,"Render error: %d!",iVar4);
          return;
        }
        if (puVar9 == local_80) {
          pvVar8 = *(void **)(param_1 + 0x50);
          if ((ulong)local_44 != 0) {
            _memcpy(local_40,pvVar8,(ulong)local_44);
            pvVar8 = (void *)((long)pvVar8 + (ulong)local_44);
          }
          if ((ulong)local_5c != 0) {
            _memcpy(local_58,pvVar8,(ulong)local_5c);
          }
        }
        (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
        (**(code **)(**(long **)(param_1 + 0x60) + 8))(*(long **)(param_1 + 0x60),local_34);
        return;
      }
      if (*(char *)(param_1 + 0x45) == '\0') {
        lVar6 = FUN_100409dc0();
        if (*(char *)(lVar6 + 0x46) != '\0') {
          pvVar8 = _calloc((ulong)*(uint *)(param_6 + 0xc),1);
          *(void **)(param_6 + 0x10) = pvVar8;
        }
        (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                  (*(long **)(param_1 + 0x60),&local_34,param_6);
        return;
      }
      cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined4 *)(param_1 + 0x48));
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x45) = 0;
      }
      goto LAB_10040ce4c;
    }
    if (param_6 == 0) {
      return;
    }
  }
  if (cVar2 != '\0') {
    return;
  }
LAB_10040ce4c:
  *param_2 = *param_2 | 0x10;
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined4 *)(param_6 + 0xc) = 0;
  return;
}

