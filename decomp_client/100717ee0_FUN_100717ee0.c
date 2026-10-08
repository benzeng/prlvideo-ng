
undefined8 * FUN_100717ee0(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  int iVar3;
  QString *pQVar4;
  undefined8 uVar5;
  QString local_140;
  undefined4 local_134;
  QString local_130;
  undefined4 local_124;
  QString local_120;
  undefined4 local_114;
  QString local_110;
  undefined4 local_104;
  QString local_100;
  undefined4 local_f4;
  QString local_f0;
  undefined4 local_e4;
  QString local_e0;
  undefined4 local_d4;
  QString local_d0;
  undefined4 local_c4;
  QString local_c0;
  undefined4 local_b4;
  QString local_b0;
  undefined4 local_a4;
  QString local_a0;
  undefined4 local_94;
  QString local_90;
  undefined4 local_84;
  QString local_80;
  undefined4 local_74;
  QString local_70;
  undefined4 local_64;
  QString local_60;
  undefined4 local_54;
  QString local_50;
  undefined4 local_44;
  QString local_40;
  undefined4 local_34;
  QString local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  if ((DAT_1023123b8 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1023123b8), iVar3 != 0)) {
    DAT_1023123b0 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10071af30,&DAT_1023123b0,0x100000000);
    ___cxa_guard_release(&DAT_1023123b8);
  }
  if (*(int *)(DAT_1023123b0 + 0x14) == 0) {
    local_28 = 0x1000004;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_28);
    QCoreApplication::translate((char *)&local_30,"RemapHelpers","Enter",0);
    QString::operator=(pQVar4,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100717fc9;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_100717fc9:
    local_34 = 0x1000005;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_34);
    QCoreApplication::translate((char *)&local_40,"RemapHelpers","Numpad Enter",0);
    QString::operator=(pQVar4,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718040;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100718040:
    local_44 = 0x1001103;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_44);
    QCoreApplication::translate((char *)&local_50,"RemapHelpers","AltGr",0);
    QString::operator=(pQVar4,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007180b7;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1007180b7:
    local_54 = 0x1000006;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_54);
    QCoreApplication::translate((char *)&local_60,"RemapHelpers","Insert",0);
    QString::operator=(pQVar4,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10071812e;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10071812e:
    local_64 = 0x1000007;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_64);
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Delete",6);
    QString::operator=(pQVar4,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718199;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100718199:
    local_74 = 0x1000009;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_74);
    QCoreApplication::translate((char *)&local_80,"RemapHelpers","PrintSc",0);
    QString::operator=(pQVar4,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_21 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718210;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100718210:
    local_84 = 0x1000008;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_84);
    QCoreApplication::translate((char *)&local_90,"RemapHelpers","Break",0);
    QString::operator=(pQVar4,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_21 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718290;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100718290:
    local_94 = 0x20;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_94);
    QCoreApplication::translate((char *)&local_a0,"RemapHelpers","Space",0);
    QString::operator=(pQVar4,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_21 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718316;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_100718316:
    local_a4 = DAT_100e15328;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_a4);
    QCoreApplication::translate((char *)&local_b0,"RemapHelpers","Shift",0);
    QString::operator=(pQVar4,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_21 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007183a1;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1007183a1:
    local_b4 = 0x1001122;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_b4);
    QCoreApplication::translate((char *)&local_c0,"RemapHelpers",s__Muhenkan__101e13658,0);
    QString::operator=(pQVar4,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_21 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718427;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100718427:
    local_c4 = 0x1001123;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_c4);
    QCoreApplication::translate((char *)&local_d0,"RemapHelpers",s__Henkan__101e1366d,0);
    QString::operator=(pQVar4,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_21 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007184ad;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1007184ad:
    local_d4 = 0x1001124;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_d4);
    QCoreApplication::translate((char *)&local_e0,"RemapHelpers","Romaji",0);
    QString::operator=(pQVar4,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_21 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718533;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_100718533:
    local_e4 = 0x1001125;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_e4);
    QCoreApplication::translate((char *)&local_f0,"RemapHelpers",s__Hiragana__101e13684,0);
    QString::operator=(pQVar4,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_21 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007185b9;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
LAB_1007185b9:
    local_f4 = 0x1001126;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_f4);
    QCoreApplication::translate((char *)&local_100,"RemapHelpers","Katakana",0);
    QString::operator=(pQVar4,&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_21 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10071863f;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_10071863f:
    local_104 = 0x1001127;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_104);
    QCoreApplication::translate((char *)&local_110,"RemapHelpers",s__Hiragana_Katakana__101e136a5,0)
    ;
    QString::operator=(pQVar4,&local_110);
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_21 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007186c5;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
LAB_1007186c5:
    local_114 = 0x1001128;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_114);
    QCoreApplication::translate((char *)&local_120,"RemapHelpers","Zenkaku",0);
    QString::operator=(pQVar4,&local_120);
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_21 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10071874b;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_10071874b:
    local_124 = 0x1001129;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_124);
    QCoreApplication::translate((char *)&local_130,"RemapHelpers","Hankaku",0);
    QString::operator=(pQVar4,&local_130);
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_21 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007187d1;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
LAB_1007187d1:
    local_134 = 0x100112a;
    pQVar4 = (QString *)FUN_10071b730(&DAT_1023123b0,&local_134);
    QCoreApplication::translate((char *)&local_140,"RemapHelpers",s____Hankaku_Zenkaku__101e136e5,0)
    ;
    QString::operator=(pQVar4,&local_140);
    if (*(int *)local_140.field0_0x0 != -1) {
      if (*(int *)local_140.field0_0x0 != 0) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
        local_21 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100718857;
      }
      QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
    }
  }
LAB_100718857:
  p_Var2 = DAT_1023123b0;
  *param_1 = DAT_1023123b0;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var2 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_21 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar5 = QHashData::detach_helper(p_Var2,FUN_10071b960,0x71b9a0,0x18);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007188ce;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_1007188ce:
  *param_1 = uVar5;
  return param_1;
}

