
void FUN_100a314c0(long param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  void *pvVar6;
  void *pvVar7;
  bool bVar8;
  long *plVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long ****pppplVar14;
  long *plVar15;
  void *local_98;
  void *pvStack_90;
  long local_88;
  long local_80;
  long *local_78;
  long local_70;
  long ***local_68;
  long ***local_60;
  long local_58;
  long local_50;
  long *local_48;
  long local_40;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x188;
    local_34 = param_2;
    FUN_100a2ce90(lVar1,&local_34);
    FUN_100a2e840(&local_50,lVar1,local_34);
    if (local_40 != 0) {
      _PasteboardSynchronize(*(undefined8 *)(param_1 + 0x20));
      local_68 = (long ***)&local_68;
      local_58 = 0;
      plVar15 = local_48;
      local_60 = local_68;
      if (local_48 == &local_50) {
LAB_100a31604:
        pppplVar14 = (long ****)local_60;
        if (plVar15 != &local_50) {
          for (; uVar10 = local_34, pppplVar14 != &local_68; pppplVar14 = (long ****)pppplVar14[1])
          {
            local_98 = (void *)0x0;
            pvStack_90 = (void *)0x0;
            local_88 = 0;
            lVar2 = plVar15[2];
            uVar13 = _CFDataGetBytePtr(pppplVar14[2]);
            uVar12 = _CFDataGetLength(pppplVar14[2]);
            cVar11 = FUN_100a2d000(lVar1,lVar2,uVar10,uVar13,uVar12,&local_98);
            if (cVar11 == '\0') {
              bVar8 = true;
              if (param_3[1] != *param_3) {
                param_3[1] = *param_3;
              }
            }
            else if (pppplVar14 == (long ****)local_60) {
              pvVar6 = (void *)*param_3;
              pvVar7 = (void *)param_3[1];
              *param_3 = (long)local_98;
              param_3[1] = (long)pvStack_90;
              lVar2 = param_3[2];
              param_3[2] = local_88;
              bVar8 = false;
              local_98 = pvVar6;
              pvStack_90 = pvVar7;
              local_88 = lVar2;
            }
            else {
              bVar8 = false;
              FUN_100a328d0(param_3,param_3[1],local_98,pvStack_90);
            }
            if (local_98 != (void *)0x0) {
              if (pvStack_90 != local_98) {
                pvStack_90 = local_98;
              }
              operator_delete(local_98);
            }
            if (bVar8) break;
          }
        }
        if (local_58 != 0) {
          ppplVar4 = (long ***)*local_60;
          ppplVar4[1] = local_68[1];
          *local_68[1] = (long *)ppplVar4;
          local_58 = 0;
          pppplVar14 = (long ****)local_60;
          if ((long ****)local_60 != &local_68) {
            do {
              pppplVar5 = (long ****)pppplVar14[1];
              if (pppplVar14[2] != (long ***)0x0) {
                _CFRelease();
              }
              operator_delete(pppplVar14);
              pppplVar14 = pppplVar5;
            } while (pppplVar5 != &local_68);
          }
        }
      }
      else {
        do {
          FUN_100a304c0(&local_80,(undefined8 *)(param_1 + 0x20),plVar15[2]);
          FUN_100a32de0(&local_68,local_78,&local_80,0);
          if (local_70 != 0) {
            lVar2 = *local_78;
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_80 + 8);
            **(long **)(local_80 + 8) = lVar2;
            local_70 = 0;
            plVar9 = local_78;
            while (plVar9 != &local_80) {
              plVar3 = (long *)plVar9[1];
              if (plVar9[2] != 0) {
                _CFRelease();
              }
              operator_delete(plVar9);
              plVar9 = plVar3;
            }
          }
          if (local_58 != 0) goto LAB_100a31604;
          plVar15 = (long *)plVar15[1];
        } while (plVar15 != &local_50);
      }
      if (local_40 != 0) {
        lVar1 = *local_48;
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(local_50 + 8);
        **(long **)(local_50 + 8) = lVar1;
        local_40 = 0;
        while (local_48 != &local_50) {
          plVar15 = (long *)local_48[1];
          operator_delete(local_48);
          local_48 = plVar15;
        }
      }
    }
  }
  return;
}

