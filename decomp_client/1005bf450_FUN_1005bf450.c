
undefined8 * FUN_1005bf450(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  undefined8 *puVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1005bf4d3;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_1005c03c0,0x5c0300,0x98);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005bf4c9;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_1005bf4c9:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_1005bf4d3:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var13 = p_Var7;
  p_Var11 = param_1;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var11 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var9 != p_Var7) {
      do {
        p_Var10 = p_Var9;
        if (*(uint *)(p_Var9 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var13 = p_Var10;
          if (cVar5 != '\0') break;
        }
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var13 = p_Var7;
        p_Var11 = p_Var10;
      } while (p_Var9 != p_Var7);
    }
  }
  if (p_Var13 == p_Var7) {
    if (*(int *)(p_Var7 + 0x20) <= *(int *)(p_Var7 + 0x14)) {
      QHashData::rehash((int)p_Var7);
      p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var7 + 0x20);
      uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
      p_Var11 = param_1;
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar6 % (ulong)uVar2;
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
        p_Var11 = p_Var13;
        if (p_Var9 != p_Var7) {
          do {
            p_Var11 = p_Var9;
            if (*(uint *)(p_Var11 + 8) == uVar6) {
              cVar5 = operator==(param_2,(QString *)(p_Var11 + 0x10));
              if (cVar5 != '\0') {
                p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
                p_Var11 = p_Var13;
                break;
              }
              p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
              p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
            }
            p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
            p_Var13 = p_Var11;
          } while (*(_func_void_Node_ptr_void_ptr **)p_Var11 != p_Var7);
        }
      }
    }
    puVar8 = (undefined8 *)QHashData::allocateNode((int)p_Var7);
    *puVar8 = *(undefined8 *)p_Var11;
    *(uint *)(puVar8 + 1) = uVar6;
    pQVar3 = param_2->field0_0x0;
    puVar8[2] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    FUN_100283580(puVar8 + 3,param_3);
    pQVar3 = param_3[0xb].field0_0x0;
    puVar8[0xe] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    pQVar3 = param_3[0xc].field0_0x0;
    puVar8[0xf] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    pQVar3 = param_3[0xd].field0_0x0;
    puVar8[0x10] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    pQVar3 = param_3[0xe].field0_0x0;
    puVar8[0x11] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    pQVar3 = param_3[0xf].field0_0x0;
    puVar8[0x12] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    *(undefined8 **)p_Var11 = puVar8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    QString::operator=((QString *)(p_Var13 + 0x18),param_3);
    QString::operator=((QString *)(p_Var13 + 0x20),param_3 + 1);
    QString::operator=((QString *)(p_Var13 + 0x28),param_3 + 2);
    QString::operator=((QString *)(p_Var13 + 0x30),param_3 + 3);
    QString::operator=((QString *)(p_Var13 + 0x38),param_3 + 4);
    QString::operator=((QString *)(p_Var13 + 0x40),param_3 + 5);
    QString::operator=((QString *)(p_Var13 + 0x48),param_3 + 6);
    QString::operator=((QString *)(p_Var13 + 0x50),param_3 + 7);
    QString::operator=((QString *)(p_Var13 + 0x58),param_3 + 8);
    QString::operator=((QString *)(p_Var13 + 0x60),param_3 + 9);
    FUN_100283c40(p_Var13 + 0x68,param_3 + 10);
    QString::operator=((QString *)(p_Var13 + 0x70),param_3 + 0xb);
    QString::operator=((QString *)(p_Var13 + 0x78),param_3 + 0xc);
    QString::operator=((QString *)(p_Var13 + 0x80),param_3 + 0xd);
    QString::operator=((QString *)(p_Var13 + 0x88),param_3 + 0xe);
    QString::operator=((QString *)(p_Var13 + 0x90),param_3 + 0xf);
    puVar8 = *(undefined8 **)p_Var11;
  }
  return puVar8;
}

