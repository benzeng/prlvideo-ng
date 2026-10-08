
void FUN_1000d2cb0(long *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  QArrayData *pQVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  QArrayData *pQVar18;
  ulong uVar19;
  QArrayData *local_78;
  _func_void_Node_ptr *local_70;
  Data *local_68;
  QArrayData *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  QMutex::lock();
  if ((*(int *)((long)param_1 + 0x21c) == param_2[1]) && ((int)param_1[0x43] == *param_2)) {
    if ((int)param_1[0x4b] != 2) {
      cVar6 = FUN_1000bd150(param_1);
      if (cVar6 == '\0') {
        MacUtils::hideAppWindows();
      }
      else if (*(char *)((long)param_1 + 0x269) == '\0') {
        puVar11 = (uint *)param_1[0xb];
        lVar16 = 0;
        if ((int)puVar11[2] < (int)puVar11[3]) {
          plVar3 = param_1 + 0xb;
          do {
            if (1 < *puVar11) {
              FUN_1000e6e10(plVar3,puVar11[1]);
              puVar11 = (uint *)*plVar3;
            }
            uVar14 = puVar11[2];
            piVar2 = (int *)(*(long *)(puVar11 + (lVar16 + (int)uVar14) * 2 + 4) + 0x30);
            if ((*(int *)(*(long *)(puVar11 + (lVar16 + (int)uVar14) * 2 + 4) + 0x34) != 0) ||
               (*piVar2 != 0)) {
              FUN_1000c4970(piVar2,0x6d,0,0);
              puVar11 = (uint *)*plVar3;
              uVar14 = puVar11[2];
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < (long)(int)puVar11[3] - (long)(int)uVar14);
        }
        if ((*(int *)((long)param_1 + 0x214) != 0) || ((int)param_1[0x42] != 0)) {
          FUN_1000c4970(param_1 + 0x42,0x6d,0,0);
        }
      }
      else {
        *(undefined1 *)((long)param_1 + 0x269) = 0;
      }
    }
    goto LAB_1000d331f;
  }
  iVar7 = FUN_1000cf550(param_1,param_2);
  if (iVar7 < 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Warning: app associated with helper with psn={%u, %u} not running",*param_2,
                    param_2[1]);
    }
    plVar3 = param_1 + 0xb;
    puVar11 = (uint *)param_1[0xb];
    uVar19 = 0xffffffff;
    if ((int)puVar11[2] < (int)puVar11[3]) {
      uVar19 = 0;
      do {
        if (1 < *puVar11) {
          FUN_1000e6e10(plVar3,puVar11[1]);
          puVar11 = (uint *)*plVar3;
        }
        if ((*(int *)(*(long *)(puVar11 + (uVar19 + (long)(int)puVar11[2]) * 2 + 4) + 0x30) ==
             *param_2) &&
           (*(int *)(*(long *)(puVar11 + (uVar19 + (long)(int)puVar11[2]) * 2 + 4) + 0x34) ==
            param_2[1])) goto LAB_1000d3155;
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)puVar11[3] - (long)(int)puVar11[2]);
      uVar19 = 0xffffffff;
    }
LAB_1000d3155:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                    param_2[1],0x138f);
    }
    FUN_1000c6a60(param_1,param_2);
    if ((-1 < (int)uVar19) && ((int)uVar19 < *(int *)(*plVar3 + 0xc) - *(int *)(*plVar3 + 8))) {
      FUN_1000e53a0(plVar3,uVar19 & 0xffffffff);
      FUN_1000df020(param_1);
      FUN_1000df110(param_1);
    }
    goto LAB_1000d331f;
  }
  iVar8 = FUN_1000dfea0(param_1);
  if (iVar8 != 0) {
    if (iVar8 == -2) {
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                    *param_2,param_2[1]);
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                      param_2[1],0x139e);
      }
      FUN_1000c6a60(param_1,param_2);
    }
    goto LAB_1000d331f;
  }
  puVar11 = (uint *)param_1[0xb];
  if (1 < *puVar11) {
    FUN_1000e6e10(param_1 + 0xb,puVar11[1]);
    puVar11 = (uint *)param_1[0xb];
  }
  lVar16 = *(long *)(puVar11 + ((long)iVar7 + (long)(int)puVar11[2]) * 2 + 4);
  iVar7 = FUN_100a67f70(local_58,0x24);
  if (iVar7 != 0) goto LAB_1000d331f;
  *(undefined1 *)(lVar16 + 0x60) = 1;
  FUN_1000b9340(&local_70,lVar16);
  FUN_1000beed0(&local_68,&local_70);
  FUN_1000bd810(&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d2dee;
    }
    QListData::dispose(local_68);
  }
LAB_1000d2dee:
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d2e1d;
    }
    QHashData::free_helper(local_70);
  }
LAB_1000d2e1d:
  pQVar12 = local_60;
  if ((((0 < (int)*(uint *)(local_60 + 4)) &&
       (iVar7 = FUN_100a68060(local_58,local_60 + *(long *)(local_60 + 0x10),
                              *(uint *)(local_60 + 4) << 2,0x2006), iVar7 == 0)) &&
      (iVar7 = FUN_100a68060(local_58,param_2,8,0x2010), iVar7 == 0)) &&
     (iVar7 = FUN_100a68060(local_58,param_2 + 1,8,0x2011), iVar7 == 0)) {
    cVar6 = FUN_1000bd150(param_1);
    puVar5 = PTR_shared_null_1021e15e8;
    if (cVar6 != '\0') {
      local_78 = (QArrayData *)PTR_shared_null_1021e1288;
      uVar13 = *(undefined8 *)(PTR_shared_null_1021e15e8 + 8);
      lVar16 = 0;
      pQVar18 = (QArrayData *)PTR_shared_null_1021e1288;
      if ((int)uVar13 < *(int *)(PTR_shared_null_1021e15e8 + 0xc)) {
        do {
          uVar14 = *(uint *)(puVar5 + ((int)uVar13 + lVar16) * 8 + 0x10);
          uVar17 = *(uint *)(pQVar18 + 4);
          uVar9 = uVar17 + 1;
          uVar15 = *(uint *)(pQVar18 + 8) & 0x7fffffff;
          if ((*(uint *)pQVar18 < 2) && (uVar9 <= uVar15)) {
            *(ulong *)(pQVar18 + (long)(int)uVar17 * 8 + *(long *)(pQVar18 + 0x10)) = (ulong)uVar14;
            iVar7 = (int)((ulong)uVar13 >> 0x20);
          }
          else {
            uVar4 = uVar15;
            if (uVar15 < uVar9) {
              uVar4 = uVar9;
            }
            FUN_1000bed40(&local_78,uVar17,uVar4,(ulong)(uVar15 < uVar9) << 3);
            *(ulong *)(local_78 +
                      (long)(int)*(uint *)(local_78 + 4) * 8 + *(long *)(local_78 + 0x10)) =
                 (ulong)uVar14;
            uVar17 = *(uint *)(local_78 + 4);
            iVar7 = *(int *)(puVar5 + 0xc);
            pQVar18 = local_78;
          }
          *(uint *)(pQVar18 + 4) = uVar17 + 1;
          lVar16 = lVar16 + 1;
          uVar13 = *(undefined8 *)(puVar5 + 8);
        } while (lVar16 < iVar7 - (int)uVar13);
      }
      if (0 < *(int *)(pQVar18 + 4)) {
        FUN_100a68060(local_58,pQVar18 + *(long *)(pQVar18 + 0x10),*(int *)(pQVar18 + 4) << 3,0x200f
                     );
      }
      if (*(int *)puVar5 != -1) {
        if (*(int *)puVar5 != 0) {
          LOCK();
          *(int *)puVar5 = *(int *)puVar5 + -1;
          local_31 = *(int *)puVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d2f94;
        }
        QListData::dispose((Data *)PTR_shared_null_1021e15e8);
      }
LAB_1000d2f94:
      if (*(int *)pQVar18 != -1) {
        if (*(int *)pQVar18 != 0) {
          LOCK();
          *(int *)pQVar18 = *(int *)pQVar18 + -1;
          local_31 = *(int *)pQVar18 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d2fc7;
        }
        QArrayData::deallocate(pQVar18,8,8);
      }
    }
LAB_1000d2fc7:
    puVar10 = (undefined8 *)FUN_100a67f30(local_58);
    *(undefined4 *)(puVar10 + 4) = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
    if (1 < *(uint *)pQVar12) {
      if ((*(uint *)(pQVar12 + 8) & 0x7fffffff) == 0) {
        pQVar12 = (QArrayData *)QArrayData::allocate(4,8,0,2);
        local_60 = pQVar12;
      }
      else {
        FUN_1000bf180(&local_60,*(uint *)(pQVar12 + 4),*(uint *)(pQVar12 + 8) & 0x7fffffff,0);
        pQVar12 = local_60;
      }
    }
    *(undefined4 *)((long)puVar10 + 0x14) = *(undefined4 *)(pQVar12 + *(long *)(pQVar12 + 0x10));
    *(undefined4 *)(puVar10 + 4) = 0x24;
    *(undefined4 *)puVar10 = 0x6c;
    iVar7 = FUN_100a67f40(local_58);
    *(int *)(puVar10 + 2) = iVar7 + -0x14;
    *(undefined4 *)(puVar10 + 1) = 0;
    *(undefined4 *)((long)puVar10 + 0xc) = 0;
    *(undefined4 *)((long)puVar10 + 4) = 2;
    uVar13 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e85b0(uVar13,puVar10);
  }
  FUN_100a681d0(local_58);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d331f;
    }
    QArrayData::deallocate(pQVar12,4,8);
  }
LAB_1000d331f:
  QMutex::unlock();
  return;
}

