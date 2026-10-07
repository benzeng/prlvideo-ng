
int FUN_1002c7ea0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  bool bVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pcVar2 = *(code **)(*param_1 + 0x80);
  local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  uVar5 = (*pcVar2)(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c7f10;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c7f10:
  if (uVar5 == 0xffffffff) {
    iVar6 = -0x7ffffff7;
    if (DAT_1011c568c < 0) {
      return -0x7ffffff7;
    }
    puVar4 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[%s] No free ports to connect <%s>",puVar4,
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return -0x7ffffff7;
    }
    local_58 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return -0x7ffffff7;
      }
      local_31 = 0;
    }
  }
  else {
    pvVar7 = operator_new(0x860,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar7 == (void *)0x0) {
      iVar6 = -0x7ffffffe;
      if (DAT_1011c568c < 0) {
        return -0x7ffffffe;
      }
      puVar4 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
      QString::toUtf8();
      FUN_1008e3970("","USB",0,"[%s] Can\'t alloc memory to connect <%s>",puVar4,
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 == -1) {
        return -0x7ffffffe;
      }
      local_58 = local_50;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return -0x7ffffffe;
        }
        local_31 = 0;
      }
    }
    else {
      FUN_1002d5800(pvVar7,param_2,param_1,uVar5);
      iVar6 = FUN_1002d5810(pvVar7);
      if (-1 < iVar6) {
        param_1[(ulong)uVar5 + 0xc] = (long)pvVar7;
        if (-1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] Connect device to host port %u",
                        (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)],uVar5);
        }
        (**(code **)(*param_1 + 0x50))(param_1,uVar5,1);
        plVar3 = (long *)param_1[10];
        lVar8 = FUN_100257d80(plVar3);
        uVar5 = *(uint *)(lVar8 + 0x2030);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar8 + 0x2030);
          bVar9 = uVar5 == uVar1;
          if (bVar9) {
            *(uint *)(lVar8 + 0x2030) = uVar5 | 8;
            uVar1 = uVar5;
          }
          uVar5 = uVar1;
          UNLOCK();
        } while (!bVar9);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        iVar6 = FUN_1002c6e30(param_2);
        if (iVar6 == 0) {
          *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        }
        *(int *)((long)param_1 + 0x46c) = *(int *)((long)param_1 + 0x46c) + 1;
        return 0;
      }
      FUN_1002d6060(pvVar7);
      operator_delete(pvVar7);
      if (DAT_1011c568c < 0) {
        return iVar6;
      }
      puVar4 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
      QString::toUtf8();
      FUN_1008e3970("","USB",0,"[%s] Failed to initialize new USB device <%s>: err 0x%x",puVar4,
                    local_58 + *(long *)(local_58 + 0x10),iVar6);
      if (*(int *)local_58 == -1) {
        return iVar6;
      }
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return iVar6;
        }
        local_31 = 0;
      }
    }
  }
  QArrayData::deallocate(local_58,1,8);
  return iVar6;
}

