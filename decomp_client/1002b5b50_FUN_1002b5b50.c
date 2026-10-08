
undefined8 FUN_1002b5b50(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  undefined8 uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  ulong uVar12;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_1002b5bcd;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_1002b5e60,0x2b5ef0,0x80);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002b5bc9;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1002b5bc9:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_1002b5bcd:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
  uVar12 = (ulong)uVar5;
  p_Var8 = param_1;
  p_Var10 = p_Var6;
  if (uVar2 != 0) {
    uVar3 = uVar12 % (ulong)uVar2;
    p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    if (p_Var9 != p_Var6) {
      do {
        p_Var10 = p_Var6;
        if (*(uint *)(p_Var9 + 8) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
          p_Var9 = p_Var6;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar4 != '\0') break;
        }
        p_Var6 = p_Var10;
        p_Var8 = p_Var9;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        p_Var10 = p_Var6;
      } while (p_Var9 != p_Var6);
    }
  }
  if (p_Var6 == p_Var10) {
    if (*(int *)(p_Var10 + 0x20) <= *(int *)(p_Var10 + 0x14)) {
      QHashData::rehash((int)p_Var10);
      p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var6 + 0x20);
      uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
      uVar12 = (ulong)uVar5;
      p_Var8 = param_1;
      if (uVar2 != 0) {
        uVar3 = uVar12 % (ulong)uVar2;
        p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        while (p_Var10 != p_Var6) {
          if (*(uint *)(p_Var10 + 8) == uVar5) {
            cVar4 = operator==(param_2,(QString *)(p_Var10 + 0x10));
            if (cVar4 != '\0') break;
            p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
            p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
          }
          p_Var8 = p_Var10;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        }
      }
    }
    uVar7 = FUN_1002b5f90(param_1,uVar12,param_2,param_3,p_Var8);
  }
  else {
    *(undefined4 *)(p_Var6 + 0x20) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(p_Var6 + 0x18) = *param_3;
    QString::operator=((QString *)(p_Var6 + 0x28),(QString *)(param_3 + 2));
    QString::operator=((QString *)(p_Var6 + 0x30),(QString *)(param_3 + 3));
    FUN_1000e5fc0(p_Var6 + 0x38,param_3 + 4);
    FUN_1000e5fc0(p_Var6 + 0x40,param_3 + 5);
    p_Var6[0x48] = *(code *)(param_3 + 6);
    QString::operator=((QString *)(p_Var6 + 0x50),(QString *)(param_3 + 7));
    *(undefined4 *)(p_Var6 + 0x78) = *(undefined4 *)(param_3 + 0xc);
    *(undefined8 *)(p_Var6 + 0x70) = param_3[0xb];
    *(undefined8 *)(p_Var6 + 0x68) = param_3[10];
    uVar7 = param_3[8];
    *(undefined8 *)(p_Var6 + 0x60) = param_3[9];
    *(undefined8 *)(p_Var6 + 0x58) = uVar7;
    uVar7 = *(undefined8 *)p_Var8;
  }
  return uVar7;
}

