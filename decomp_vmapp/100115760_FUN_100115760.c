
void FUN_100115760(long *param_1)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  int iVar3;
  QArrayData *this;
  string *this_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_40;
  
  puVar2 = PTR_shared_null_100ba20d0;
  if ((undefined *)*param_1 != PTR_shared_null_100ba20d0) {
    iVar3 = (int)*(long *)PTR_shared_null_100ba20d0;
    local_40 = puVar2;
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        if ((int)*(uint *)(PTR_shared_null_100ba20d0 + 8) < 0) {
          local_40 = (undefined *)
                     QArrayData::allocate
                               (0x20,8,*(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffffff,0);
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_40[0xb] = local_40[0xb] | 0x80;
          puVar6 = local_40;
        }
        else {
          local_40 = (undefined *)
                     QArrayData::allocate(0x20,8,*(long *)PTR_shared_null_100ba20d0 >> 0x20,0);
          puVar6 = local_40;
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
            puVar6 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar6 + 8) & 0x7fffffff) != 0) {
          iVar3 = *(int *)(puVar2 + 4);
          if (((long)iVar3 & 0x7ffffffffffffffU) != 0) {
            puVar4 = (undefined8 *)(puVar2 + *(long *)(puVar2 + 0x10));
            puVar8 = puVar4 + (long)iVar3 * 4;
            puVar5 = (undefined8 *)(puVar6 + *(long *)(puVar6 + 0x10));
            do {
              *puVar5 = *puVar4;
              std::string::string((string *)(puVar5 + 1),(string *)(puVar4 + 1));
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 4;
              puVar5 = puVar5 + 4;
            } while (puVar4 != puVar8);
            iVar3 = *(int *)(puVar2 + 4);
            puVar6 = local_40;
          }
          *(int *)(puVar6 + 4) = iVar3;
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + 1;
        UNLOCK();
      }
    }
    pQVar1 = (QArrayData *)*param_1;
    *param_1 = (long)local_40;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100115844;
      }
      lVar7 = (long)*(int *)(pQVar1 + 4) << 5;
      if (lVar7 != 0) {
        this = pQVar1 + *(long *)(pQVar1 + 0x10) + 8;
        do {
          std::string::~string((string *)this);
          this = this + 0x20;
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
      }
      QArrayData::deallocate(pQVar1,0x20,8);
    }
  }
LAB_100115844:
  puVar2 = PTR_shared_null_100ba20d0;
  iVar3 = (int)*(undefined8 *)PTR_shared_null_100ba20d0;
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      iVar3 = (int)((ulong)*(undefined8 *)PTR_shared_null_100ba20d0 >> 0x20);
    }
    else {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      iVar3 = *(int *)(puVar2 + 4);
    }
    lVar7 = (long)iVar3 << 5;
    if (lVar7 != 0) {
      this_00 = (string *)(puVar2 + *(long *)(puVar2 + 0x10) + 8);
      do {
        std::string::~string(this_00);
        this_00 = this_00 + 0x20;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,0x20,8);
  }
  return;
}

