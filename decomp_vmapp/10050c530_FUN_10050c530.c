
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10050c530(long param_1,string *param_2)

{
  string *psVar1;
  string sVar2;
  long ******pppppplVar3;
  string *psVar4;
  long *******ppppppplVar5;
  byte bVar6;
  int iVar7;
  string *this;
  undefined8 *puVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  byte bVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  size_t sVar16;
  string *psVar17;
  string *psVar18;
  long *****ppppplVar19;
  long *plVar20;
  long *******ppppppplVar21;
  bool bVar22;
  string *local_40;
  long *******local_38;
  
  sVar2 = *param_2;
  if (((byte)sVar2 & 1) == 0) {
    ppppplVar19 = (long *****)(ulong)((byte)sVar2 >> 1);
  }
  else {
    ppppplVar19 = *(long ******)(param_2 + 8);
  }
  ppppppplVar21 = (long *******)(param_1 + 0x88);
  if (*(long ********)(param_1 + 0x80) != ppppppplVar21) {
    pppppplVar9 = *(long *******)(param_2 + 0x38);
    ppppppplVar10 = *(long ********)(param_1 + 0x80);
    do {
      pppppplVar12 = ppppppplVar10[4];
      if (pppppplVar12 != pppppplVar9) {
        bVar6 = *(byte *)pppppplVar12;
        if ((bVar6 & 1) == 0) {
          ppppplVar14 = (long *****)(ulong)(bVar6 >> 1);
        }
        else {
          ppppplVar14 = pppppplVar12[1];
        }
        if (ppppplVar14 <= ppppplVar19) {
          psVar17 = param_2 + 1;
          if (((byte)sVar2 & 1) != 0) {
            psVar17 = *(string **)(param_2 + 0x10);
          }
          if ((bVar6 & 1) == 0) {
            ppppplVar14 = (long *****)((long)pppppplVar12 + 1);
            ppppplVar15 = (long *****)(ulong)(bVar6 >> 1);
          }
          else {
            ppppplVar15 = pppppplVar12[1];
            ppppplVar14 = pppppplVar12[2];
          }
          iVar7 = _strncmp((char *)psVar17,(char *)ppppplVar14,(size_t)ppppplVar15);
          if (iVar7 == 0) {
            *(long *******)(param_2 + 0x38) = pppppplVar12;
            pppppplVar9 = ppppppplVar10[4];
            ppppppplVar21 = (long *******)pppppplVar9[4];
            if ((long *******)pppppplVar9[4] != (long *******)0x0) goto LAB_10050ca93;
            local_38 = (long *******)(pppppplVar9 + 4);
            goto LAB_10050cacd;
          }
        }
      }
      ppppppplVar5 = (long *******)ppppppplVar10[1];
      if ((long *******)ppppppplVar10[1] == (long *******)0x0) {
        do {
          ppppppplVar11 = (long *******)ppppppplVar10[2];
          bVar22 = (long *******)*ppppppplVar11 != ppppppplVar10;
          ppppppplVar10 = ppppppplVar11;
        } while (bVar22);
      }
      else {
        do {
          ppppppplVar11 = ppppppplVar5;
          ppppppplVar5 = (long *******)*ppppppplVar11;
        } while ((long *******)*ppppppplVar11 != (long *******)0x0);
      }
      ppppppplVar10 = ppppppplVar11;
    } while (ppppppplVar11 != ppppppplVar21);
  }
  this = operator_new(0x40);
  std::string::string(this,param_2);
  psVar17 = this + 0x18;
  psVar1 = this + 0x20;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(string **)(this + 0x18) = psVar1;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined8 *)(this + 0x38) = 0;
  *(string **)(param_2 + 0x38) = this;
  if (*(long *)(this + 0x20) == 0) {
    puVar8 = operator_new(0x28);
    puVar8[4] = param_2;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[2] = psVar1;
    *(undefined8 **)psVar1 = puVar8;
    if (**(long **)psVar17 != 0) {
      *(long *)psVar17 = **(long **)psVar17;
      puVar8 = *(undefined8 **)psVar1;
    }
    FUN_1000e8bb0(*(undefined8 *)(this + 0x20),puVar8);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  pppppplVar9 = operator_new(0x28);
  pppppplVar9[4] = (long *****)this;
  ppppppplVar10 = (long *******)*ppppppplVar21;
  if ((long *******)*ppppppplVar21 == (long *******)0x0) {
    local_38 = ppppppplVar21;
    ppppppplVar10 = ppppppplVar21;
  }
  else {
    do {
      while (local_38 = ppppppplVar10, (string *)local_38[4] <= this) {
        if (this <= (string *)local_38[4]) {
          ppppppplVar10 = (long *******)&local_38;
          goto LAB_10050c759;
        }
        ppppppplVar10 = (long *******)local_38[1];
        if ((long *******)local_38[1] == (long *******)0x0) {
          ppppppplVar10 = local_38 + 1;
          goto LAB_10050c759;
        }
      }
      ppppppplVar10 = (long *******)*local_38;
    } while ((long *******)*local_38 != (long *******)0x0);
    ppppppplVar10 = local_38;
  }
LAB_10050c759:
  plVar20 = (long *)(param_1 + 0x80);
  if (*ppppppplVar10 == (long ******)0x0) {
    pppppplVar9[1] = (long *****)0x0;
    *pppppplVar9 = (long *****)0x0;
    pppppplVar9[2] = (long *****)local_38;
    *ppppppplVar10 = pppppplVar9;
    if (*(long *)*plVar20 != 0) {
      *plVar20 = *(long *)*plVar20;
      pppppplVar9 = *ppppppplVar10;
    }
    FUN_1000e8bb0(*(undefined8 *)(param_1 + 0x88),pppppplVar9);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  }
  else {
    pppppplVar9[4] = (long *****)0x0;
    if (*(long *)(this + 0x38) != 0) {
      _CFRelease();
    }
    FUN_10050c4f0(psVar17,*(undefined8 *)(this + 0x20));
    std::string::~string(this);
    operator_delete(this);
    operator_delete(pppppplVar9);
  }
  if ((long *******)*plVar20 == ppppppplVar21) {
    return 1;
  }
  ppppppplVar10 = (long *******)*plVar20;
  do {
    pppppplVar9 = ppppppplVar10[4];
    sVar2 = *this;
    bVar6 = (byte)sVar2 & 1;
    if (bVar6 == 0) {
      ppppplVar19 = (long *****)(ulong)((byte)sVar2 >> 1);
    }
    else {
      ppppplVar19 = *(long ******)(this + 8);
    }
    bVar13 = *(byte *)pppppplVar9 & 1;
    if (bVar13 == 0) {
      ppppplVar14 = (long *****)(ulong)(*(byte *)pppppplVar9 >> 1);
    }
    else {
      ppppplVar14 = pppppplVar9[1];
    }
    if (ppppplVar19 < ppppplVar14) {
      psVar18 = this + 1;
      if (bVar6 != 0) {
        psVar18 = *(string **)(this + 0x10);
      }
      if (bVar13 == 0) {
        ppppplVar19 = (long *****)((long)pppppplVar9 + 1);
      }
      else {
        ppppplVar19 = pppppplVar9[2];
      }
      if (bVar6 == 0) {
        sVar16 = (size_t)((byte)sVar2 >> 1);
      }
      else {
        sVar16 = *(size_t *)(this + 8);
      }
      iVar7 = _strncmp((char *)psVar18,(char *)ppppplVar19,sVar16);
      if (iVar7 != 0) goto LAB_10050c8a6;
      pppppplVar12 = (long ******)pppppplVar9[3];
      while (pppppplVar12 != pppppplVar9 + 4) {
        ppppplVar19 = pppppplVar12[4];
        ppppplVar19[7] = (long ****)this;
        psVar18 = *(string **)(this + 0x20);
        if (*(string **)(this + 0x20) == (string *)0x0) {
          local_40 = psVar1;
          psVar18 = psVar1;
        }
        else {
          do {
            while (local_40 = psVar18, *(long ******)(local_40 + 0x20) <= ppppplVar19) {
              if (ppppplVar19 <= *(long ******)(local_40 + 0x20)) {
                psVar18 = (string *)&local_40;
                goto LAB_10050c978;
              }
              psVar18 = *(string **)(local_40 + 8);
              if (*(string **)(local_40 + 8) == (string *)0x0) {
                psVar18 = local_40 + 8;
                goto LAB_10050c978;
              }
            }
            psVar18 = *(string **)local_40;
          } while (*(string **)local_40 != (string *)0x0);
          psVar18 = local_40;
        }
LAB_10050c978:
        psVar4 = local_40;
        if (*(long *)psVar18 == 0) {
          puVar8 = operator_new(0x28);
          puVar8[4] = ppppplVar19;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[2] = psVar4;
          *(undefined8 **)psVar18 = puVar8;
          if (**(long **)psVar17 != 0) {
            *(long *)psVar17 = **(long **)psVar17;
            puVar8 = *(undefined8 **)psVar18;
          }
          FUN_1000e8bb0(*(undefined8 *)(this + 0x20),puVar8);
          *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
        }
        pppppplVar3 = (long ******)pppppplVar12[1];
        if ((long ******)pppppplVar12[1] == (long ******)0x0) {
          do {
            pppppplVar3 = (long ******)pppppplVar12[2];
            bVar22 = (long ******)*pppppplVar3 != pppppplVar12;
            pppppplVar12 = pppppplVar3;
          } while (bVar22);
        }
        else {
          do {
            pppppplVar12 = pppppplVar3;
            pppppplVar3 = (long ******)*pppppplVar12;
          } while ((long ******)*pppppplVar12 != (long ******)0x0);
        }
      }
      ppppppplVar11 = (long *******)FUN_10050cbc0(plVar20,ppppppplVar10);
    }
    else {
LAB_10050c8a6:
      ppppppplVar5 = (long *******)ppppppplVar10[1];
      if ((long *******)ppppppplVar10[1] == (long *******)0x0) {
        do {
          ppppppplVar11 = (long *******)ppppppplVar10[2];
          bVar22 = (long *******)*ppppppplVar11 != ppppppplVar10;
          ppppppplVar10 = ppppppplVar11;
        } while (bVar22);
      }
      else {
        do {
          ppppppplVar11 = ppppppplVar5;
          ppppppplVar5 = (long *******)*ppppppplVar11;
        } while ((long *******)*ppppppplVar11 != (long *******)0x0);
      }
    }
    ppppppplVar10 = ppppppplVar11;
    if (ppppppplVar11 == ppppppplVar21) {
      return 1;
    }
  } while( true );
LAB_10050ca93:
  local_38 = ppppppplVar21;
  if ((string *)local_38[4] <= param_2) {
    if (param_2 <= (string *)local_38[4]) {
      ppppppplVar21 = (long *******)&local_38;
      goto LAB_10050cae1;
    }
    ppppppplVar21 = (long *******)local_38[1];
    if ((long *******)local_38[1] == (long *******)0x0) {
      ppppppplVar21 = local_38 + 1;
      goto LAB_10050cae1;
    }
    goto LAB_10050ca93;
  }
  ppppppplVar21 = (long *******)*local_38;
  if ((long *******)*local_38 == (long *******)0x0) {
LAB_10050cacd:
    ppppppplVar21 = local_38;
LAB_10050cae1:
    ppppppplVar5 = local_38;
    if (*ppppppplVar21 == (long ******)0x0) {
      pppppplVar12 = operator_new(0x28);
      pppppplVar12[4] = (long *****)param_2;
      pppppplVar12[1] = (long *****)0x0;
      *pppppplVar12 = (long *****)0x0;
      pppppplVar12[2] = (long *****)ppppppplVar5;
      *ppppppplVar21 = pppppplVar12;
      if ((long *****)*pppppplVar9[3] != (long *****)0x0) {
        pppppplVar9[3] = (long *****)*pppppplVar9[3];
        pppppplVar12 = *ppppppplVar21;
      }
      FUN_1000e8bb0(pppppplVar9[4],pppppplVar12);
      pppppplVar9[5] = (long *****)((long)pppppplVar9[5] + 1);
    }
    pppppplVar9 = ppppppplVar10[4];
    if ((*(byte *)pppppplVar9 & 1) == 0) {
      ppppplVar14 = (long *****)(ulong)(*(byte *)pppppplVar9 >> 1);
    }
    else {
      ppppplVar14 = pppppplVar9[1];
    }
    if (ppppplVar19 == ppppplVar14) {
      *(int *)(pppppplVar9 + 6) = *(int *)(pppppplVar9 + 6) + 1;
    }
    return 0;
  }
  goto LAB_10050ca93;
}

