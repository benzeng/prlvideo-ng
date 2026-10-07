
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100758590(undefined8 param_1,uint param_2,long param_3,QString *param_4)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar14;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  uVar11 = (ulong)param_2;
  QFile::QFile((QFile *)local_48,param_4);
  puVar4 = operator_new__(0x100000,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar4 == (undefined8 *)0x0) {
    bVar13 = false;
    FUN_1008e3970("","dbgdump",0,"Failed to allocate memory");
    goto LAB_100758bca;
  }
  cVar1 = QFile::open(local_48,10);
  if (cVar1 == '\0') {
    QString::toUtf8();
    lVar5 = *(long *)(local_50 + 0x10);
    QIODevice::errorString();
    QString::toUtf8();
    FUN_1008e3970("","dbgdump",0,"can\'t create file \'%s\': %s",local_50 + lVar5,
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100758702;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100758702:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100758732;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100758732:
    cVar1 = '\0';
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100758bbd;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    FUN_100753030(param_1,1);
    DAT_1011bf918 = '\x01';
    lVar5 = 0x3f8;
    if (param_2 != 0) {
      psVar6 = (short *)(param_3 + 0x220);
      uVar10 = 0;
      lVar5 = 0x3f8;
      do {
        if (*psVar6 == 0x40) {
          DAT_1011bf918 = '\0';
          lVar5 = 0x4b8;
          break;
        }
        uVar10 = uVar10 + 1;
        psVar6 = psVar6 + 0x3b4;
      } while (uVar10 < uVar11);
    }
    DAT_1011bf950 = 0x40;
    lVar7 = DAT_1011bf938 - DAT_1011bf930 >> 6;
    DAT_1011bf968 =
         (long)puVar4 + ((lVar5 * uVar11 + 200 + lVar7 * 0x38) - (long)(puVar4 + lVar7 * 7 + 7));
    lVar5 = (long)(puVar4 + lVar7 * 7 + 7) - (long)puVar4;
    DAT_1011bf960 = lVar5 + 0x40;
    _DAT_1011bf958 = (lVar5 >> 3) * 0x6db6db6db6db6db7;
    DAT_1011bf970 = lVar5 + 0xfff + DAT_1011bf968 & 0xfffffffffffff000;
    if (DAT_1011bf970 < 0x100001) {
      ___bzero(puVar4);
      FUN_100753030(param_1,3);
      uVar14 = (uint)((ulong)in_stack_ffffffffffffff68 >> 0x20);
      DAT_1011bf928 = DAT_1011bf950 + 0xfff + DAT_1011bf970 & 0xfffffffffffff000;
      uVar10 = 0;
      if (DAT_1011bf930 != DAT_1011bf938) {
        do {
          uVar8 = DAT_1011bf928;
          if (uVar10 != 0) {
            uVar8 = *(long *)(uVar10 * 0x40 + -0x38 + DAT_1011bf930) +
                    *(long *)(uVar10 * 0x40 + -0x20 + DAT_1011bf930);
          }
          *(ulong *)(DAT_1011bf930 + 0x20 + uVar10 * 0x40) = uVar8;
          bVar2 = FUN_100758290(param_1,local_48,uVar10,puVar4,0x100000);
          uVar14 = (uint)((ulong)in_stack_ffffffffffffff68 >> 0x20);
          uVar10 = uVar10 + bVar2;
        } while (uVar10 < (ulong)(DAT_1011bf938 - DAT_1011bf930 >> 6));
        uVar10 = 0;
        lVar12 = 0x28;
        lVar5 = DAT_1011bf930;
        lVar7 = DAT_1011bf938;
        if (DAT_1011bf938 != DAT_1011bf930) {
          do {
            if (2 < DAT_1011b55f8) {
              in_stack_ffffffffffffff68 = *(undefined8 *)(lVar5 + -0x18 + lVar12);
              lVar7 = *(long *)(lVar5 + -0x10 + lVar12);
              uVar9 = 0;
              if (lVar7 != 0) {
                uVar9 = *(undefined4 *)(lVar7 + 0x5b8);
              }
              FUN_1008e3970("","dbgdump",3,
                            "is_pa: %u, size: %llx, lin_addr: %llx, owning_vcpu: %x, file_off: %llx, name: %s"
                            ,*(undefined1 *)(lVar5 + -0x28 + lVar12),
                            *(undefined8 *)(lVar5 + -0x20 + lVar12),in_stack_ffffffffffffff68,uVar9,
                            *(undefined8 *)(lVar5 + -8 + lVar12),lVar5 + lVar12);
              lVar5 = DAT_1011bf930;
              lVar7 = DAT_1011bf938;
            }
            uVar14 = (uint)((ulong)in_stack_ffffffffffffff68 >> 0x20);
            uVar10 = uVar10 + 1;
            lVar12 = lVar12 + 0x40;
          } while (uVar10 < (ulong)(lVar7 - lVar5 >> 6));
        }
      }
      cVar1 = FUN_100757050(param_1,local_48,uVar11,param_3,puVar4,0x100000,(ulong)uVar14 << 0x20);
      if (cVar1 == '\0') {
        cVar1 = '\0';
        FUN_1008e3970("","dbgdump",0,"Failed to write kcore pheaders");
      }
      else {
        DAT_1011bf978 = DAT_1011bf928 + 0xfff + DAT_1011bf948 & 0xfffffffffffff000;
        cVar1 = FUN_100757b00();
        if (cVar1 == '\0') {
          cVar1 = '\0';
          FUN_1008e3970("","dbgdump",0,"Failed to write kcore sections");
        }
        else {
          DAT_1011bf920 = 0;
          puVar4[7] = 0;
          puVar4[6] = 0;
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
          *(undefined4 *)puVar4 = 0x464c457f;
          *(undefined1 *)((long)puVar4 + 4) = 2;
          *(undefined1 *)((long)puVar4 + 5) = 1;
          *(undefined1 *)((long)puVar4 + 6) = 1;
          *(undefined1 *)((long)puVar4 + 7) = 0;
          *(undefined2 *)(puVar4 + 2) = 4;
          uVar3 = 3;
          if (DAT_1011bf918 == '\0') {
            uVar3 = 0x3e;
          }
          *(undefined2 *)((long)puVar4 + 0x12) = uVar3;
          *(undefined4 *)((long)puVar4 + 0x14) = 1;
          puVar4[4] = DAT_1011bf950;
          *(undefined4 *)((long)puVar4 + 0x34) = 0x380040;
          *(undefined2 *)(puVar4 + 7) = DAT_1011bf958;
          *(undefined2 *)((long)puVar4 + 0x3c) = DAT_1011bf980;
          puVar4[5] = DAT_1011bf978;
          *(undefined2 *)((long)puVar4 + 0x3a) = 0x40;
          *(undefined2 *)((long)puVar4 + 0x3e) = 1;
          cVar1 = FUN_1007567e0();
          if (cVar1 == '\0') {
            FUN_1008e3970("","dbgdump",0,"Failed to write kcore header");
          }
          else {
            FUN_100753030(param_1,99);
          }
        }
      }
    }
    else {
      FUN_1008e3970("","dbgdump",0,"ELF pheaders size > buffer size");
      cVar1 = '\0';
      FUN_1008e3970("","dbgdump",0,"Failed to write kcore pheaders - dry_run");
    }
    (**(code **)(local_48[0] + 0x70))(local_48);
  }
LAB_100758bbd:
  operator_delete__(puVar4);
  bVar13 = cVar1 != '\0';
LAB_100758bca:
  QFile::~QFile((QFile *)local_48);
  return bVar13;
}

