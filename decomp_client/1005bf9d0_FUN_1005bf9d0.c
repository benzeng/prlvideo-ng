
code * FUN_1005bf9d0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  ulong uVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_1005bfa48;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_1002b5e60,0x2b5ef0,0x80);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bfa45;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1005bfa45:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_1005bfa48:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
  uVar10 = (ulong)uVar5;
  p_Var11 = param_1;
  p_Var7 = p_Var6;
  if (uVar2 != 0) {
    uVar3 = uVar10 % (ulong)uVar2;
    p_Var11 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    if (p_Var8 != p_Var6) {
      do {
        p_Var7 = p_Var8;
        if (*(uint *)(p_Var8 + 8) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(p_Var8 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar4 != '\0') break;
        }
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
        p_Var11 = p_Var7;
        p_Var7 = p_Var6;
      } while (p_Var8 != p_Var6);
    }
  }
  if (p_Var7 == p_Var6) {
    if (*(int *)(p_Var6 + 0x20) <= *(int *)(p_Var6 + 0x14)) {
      QHashData::rehash((int)p_Var6);
      p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var6 + 0x20);
      uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
      uVar10 = (ulong)uVar5;
      p_Var11 = param_1;
      if (uVar2 != 0) {
        uVar3 = uVar10 % (ulong)uVar2;
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        p_Var11 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        while (p_Var8 = p_Var7, p_Var8 != p_Var6) {
          if (*(uint *)(p_Var8 + 8) == uVar5) {
            cVar4 = operator==(param_2,(QString *)(p_Var8 + 0x10));
            if (cVar4 != '\0') break;
            p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
            p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var11 = p_Var8;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        }
      }
    }
    local_a0 = 0xff;
    local_9c = 0;
    local_98 = 0;
    local_90._8_4_ = (int)PTR_shared_null_1021e1288;
    local_90._0_8_ = PTR_shared_null_1021e1288;
    local_90._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_80._8_4_ = (int)PTR_shared_null_1021e15e8;
    local_80._0_8_ = PTR_shared_null_1021e15e8;
    local_80._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_70 = 0;
    local_68 = PTR_shared_null_1021e1288;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    p_Var7 = (_func_void_Node_ptr_void_ptr *)FUN_1002b5f90(param_1,uVar10,param_2,&local_a0,p_Var11)
    ;
    FUN_10005e410(&local_a0);
  }
  return p_Var7 + 0x18;
}

