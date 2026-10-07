
void FUN_10050b2c0(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  void *pvVar3;
  string *this;
  pthread_t p_Var4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  bool bVar17;
  long *local_58;
  long local_50;
  long local_48;
  long local_40;
  char local_38;
  
  local_40 = param_1 + 8;
  local_38 = '\x01';
  std::mutex::lock();
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    pbVar12 = (byte *)*param_2;
    plVar11 = *(long **)(param_1 + 0xa0);
    plVar8 = (long *)(param_1 + 0xa0);
    do {
      while (plVar13 = plVar11, pbVar12 <= (byte *)plVar13[4]) {
        plVar11 = (long *)*plVar13;
        plVar8 = plVar13;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_10050b340;
      }
      plVar6 = plVar13 + 1;
      plVar13 = plVar8;
      plVar11 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
LAB_10050b340:
    if ((plVar13 != (long *)(param_1 + 0xa0)) && ((byte *)plVar13[4] <= pbVar12)) {
      p_Var4 = _pthread_self();
      if (p_Var4 == *(pthread_t *)(param_1 + 0x108)) {
        if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
          *(undefined8 *)param_2[4] = 0;
        }
      }
      else if (*(char *)(param_1 + 0x78) != '\0') {
        do {
          std::condition_variable::wait((unique_lock *)(param_1 + 0x48));
        } while (*(char *)(param_1 + 0x78) != '\0');
      }
      if ((*(byte *)(param_2 + 3) & 1) == 0) {
        *(long *)(pbVar12 + 0x30) = *(long *)(pbVar12 + 0x30) + -1;
      }
      pbVar2 = *(byte **)(pbVar12 + 0x20);
      if (pbVar2 != (byte *)0x0) {
        pbVar10 = pbVar2;
        pbVar9 = pbVar12 + 0x20;
        do {
          while (pbVar15 = pbVar10, param_2 <= *(undefined8 **)(pbVar15 + 0x20)) {
            pbVar10 = *(byte **)pbVar15;
            pbVar9 = pbVar15;
            if (*(byte **)pbVar15 == (byte *)0x0) goto LAB_10050b3e4;
          }
          pbVar7 = pbVar15 + 8;
          pbVar15 = pbVar9;
          pbVar10 = *(byte **)pbVar7;
        } while (*(byte **)pbVar7 != (byte *)0x0);
LAB_10050b3e4:
        if ((pbVar15 != pbVar12 + 0x20) && (*(undefined8 **)(pbVar15 + 0x20) <= param_2)) {
          pbVar10 = pbVar15;
          pbVar9 = *(byte **)(pbVar15 + 8);
          if (*(byte **)(pbVar15 + 8) == (byte *)0x0) {
            do {
              pbVar7 = *(byte **)(pbVar10 + 0x10);
              bVar17 = *(byte **)pbVar7 != pbVar10;
              pbVar10 = pbVar7;
            } while (bVar17);
          }
          else {
            do {
              pbVar7 = pbVar9;
              pbVar9 = *(byte **)pbVar7;
            } while (*(byte **)pbVar7 != (byte *)0x0);
          }
          if (*(byte **)(pbVar12 + 0x18) == pbVar15) {
            *(byte **)(pbVar12 + 0x18) = pbVar7;
          }
          *(long *)(pbVar12 + 0x28) = *(long *)(pbVar12 + 0x28) + -1;
          FUN_1000e86c0(pbVar2,pbVar15);
          pvVar3 = *(void **)(pbVar15 + 0x20);
          pbVar15[0x20] = 0;
          pbVar15[0x21] = 0;
          pbVar15[0x22] = 0;
          pbVar15[0x23] = 0;
          pbVar15[0x24] = 0;
          pbVar15[0x25] = 0;
          pbVar15[0x26] = 0;
          pbVar15[0x27] = 0;
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
          operator_delete(pbVar15);
        }
      }
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
      if (*(long *)(pbVar12 + 0x28) == 0) {
        pbVar2 = *(byte **)(pbVar12 + 0x38);
        if ((*pbVar2 & 1) == 0) {
          uVar5 = (ulong)(*pbVar2 >> 1);
        }
        else {
          uVar5 = *(ulong *)(pbVar2 + 8);
        }
        if ((*pbVar12 & 1) == 0) {
          uVar16 = (ulong)(*pbVar12 >> 1);
        }
        else {
          uVar16 = *(ulong *)(pbVar12 + 8);
        }
        plVar11 = plVar13;
        plVar8 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar11[2];
            bVar17 = (long *)*plVar6 != plVar11;
            plVar11 = plVar6;
          } while (bVar17);
        }
        else {
          do {
            plVar6 = plVar8;
            plVar8 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x98) == plVar13) {
          *(long **)(param_1 + 0x98) = plVar6;
        }
        *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0xa0),plVar13);
        this = (string *)plVar13[4];
        plVar13[4] = 0;
        if (this != (string *)0x0) {
          FUN_10050c420(this + 0x18,*(undefined8 *)(this + 0x20));
          std::string::~string(this);
          operator_delete(this);
        }
        operator_delete(plVar13);
        pbVar10 = pbVar2 + 0x20;
        pbVar9 = *(byte **)(pbVar2 + 0x20);
        pbVar15 = pbVar9;
        pbVar7 = pbVar10;
        if (pbVar9 != (byte *)0x0) {
          do {
            while (pbVar14 = pbVar15, pbVar12 <= *(byte **)(pbVar14 + 0x20)) {
              pbVar15 = *(byte **)pbVar14;
              pbVar7 = pbVar14;
              if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_10050b561;
            }
            pbVar1 = pbVar14 + 8;
            pbVar14 = pbVar7;
            pbVar15 = *(byte **)pbVar1;
          } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_10050b561:
          if ((pbVar14 != pbVar10) && (*(byte **)(pbVar14 + 0x20) <= pbVar12)) {
            pbVar12 = pbVar14;
            pbVar15 = *(byte **)(pbVar14 + 8);
            if (*(byte **)(pbVar14 + 8) == (byte *)0x0) {
              do {
                pbVar7 = *(byte **)(pbVar12 + 0x10);
                bVar17 = *(byte **)pbVar7 != pbVar12;
                pbVar12 = pbVar7;
              } while (bVar17);
            }
            else {
              do {
                pbVar7 = pbVar15;
                pbVar15 = *(byte **)pbVar7;
              } while (*(byte **)pbVar7 != (byte *)0x0);
            }
            if (*(byte **)(pbVar2 + 0x18) == pbVar14) {
              *(byte **)(pbVar2 + 0x18) = pbVar7;
            }
            *(long *)(pbVar2 + 0x28) = *(long *)(pbVar2 + 0x28) + -1;
            FUN_1000e86c0(pbVar9,pbVar14);
            operator_delete(pbVar14);
          }
        }
        if (*(long *)(pbVar2 + 0x28) == 0) {
          if (*(long **)(param_1 + 0x88) != (long *)0x0) {
            plVar11 = *(long **)(param_1 + 0x88);
            plVar8 = (long *)(param_1 + 0x88);
            do {
              while (plVar13 = plVar11, pbVar2 <= (byte *)plVar13[4]) {
                plVar11 = (long *)*plVar13;
                plVar8 = plVar13;
                if ((long *)*plVar13 == (long *)0x0) goto LAB_10050b6b1;
              }
              plVar6 = plVar13 + 1;
              plVar13 = plVar8;
              plVar11 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
LAB_10050b6b1:
            if ((plVar13 != (long *)(param_1 + 0x88)) && ((byte *)plVar13[4] <= pbVar2)) {
              FUN_10050cbc0(param_1 + 0x80);
            }
          }
        }
        else {
          if (uVar5 != uVar16) goto LAB_10050b76f;
          pbVar12 = pbVar2 + 0x30;
          *(int *)pbVar12 = *(int *)pbVar12 + -1;
          if (*(int *)pbVar12 != 0) goto LAB_10050b76f;
          local_58 = *(long **)(pbVar2 + 0x18);
          local_50 = *(long *)(pbVar2 + 0x20);
          local_48 = *(long *)(pbVar2 + 0x28);
          plVar11 = &local_50;
          if (local_48 != 0) {
            *(long **)(local_50 + 0x10) = &local_50;
            *(byte **)(pbVar2 + 0x18) = pbVar10;
            pbVar2[0x28] = 0;
            pbVar2[0x29] = 0;
            pbVar2[0x2a] = 0;
            pbVar2[0x2b] = 0;
            pbVar2[0x2c] = 0;
            pbVar2[0x2d] = 0;
            pbVar2[0x2e] = 0;
            pbVar2[0x2f] = 0;
            pbVar10[0] = 0;
            pbVar10[1] = 0;
            pbVar10[2] = 0;
            pbVar10[3] = 0;
            pbVar10[4] = 0;
            pbVar10[5] = 0;
            pbVar10[6] = 0;
            pbVar10[7] = 0;
            plVar8 = local_58;
            while (plVar11 = local_58, plVar8 != &local_50) {
              FUN_10050c530(param_1,plVar8[4]);
              plVar11 = (long *)plVar8[1];
              if ((long *)plVar8[1] == (long *)0x0) {
                do {
                  plVar11 = (long *)plVar8[2];
                  bVar17 = (long *)*plVar11 != plVar8;
                  plVar8 = plVar11;
                } while (bVar17);
              }
              else {
                do {
                  plVar8 = plVar11;
                  plVar11 = (long *)*plVar8;
                } while ((long *)*plVar8 != (long *)0x0);
              }
            }
          }
          local_58 = plVar11;
          if (*(long **)(param_1 + 0x88) != (long *)0x0) {
            plVar11 = *(long **)(param_1 + 0x88);
            plVar8 = (long *)(param_1 + 0x88);
            do {
              while (plVar13 = plVar11, pbVar2 <= (byte *)plVar13[4]) {
                plVar11 = (long *)*plVar13;
                plVar8 = plVar13;
                if ((long *)*plVar13 == (long *)0x0) goto LAB_10050b708;
              }
              plVar6 = plVar13 + 1;
              plVar13 = plVar8;
              plVar11 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
LAB_10050b708:
            if ((plVar13 != (long *)(param_1 + 0x88)) && ((byte *)plVar13[4] <= pbVar2)) {
              FUN_10050cbc0(param_1 + 0x80);
            }
          }
          FUN_10050c4f0(&local_58,local_50);
        }
        *(undefined1 *)(param_1 + 0xb8) = 1;
        if (local_38 == '\0') {
          std::__throw_system_error(1,"unique_lock::unlock: not locked");
        }
        std::mutex::unlock();
        local_38 = '\0';
        _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0xe0));
        if (1 < *(ulong *)(param_1 + 0xe8)) {
          _CFRunLoopWakeUp();
        }
      }
    }
  }
LAB_10050b76f:
  if (local_38 != '\0') {
    std::mutex::unlock();
  }
  return;
}

