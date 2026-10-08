
/* Function Stack Size: 0x10 bytes */

ID Server::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_18;
  
  local_18.super_class = (class_t *)PTR_Server_10226abc0;
  local_18.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_18,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    *(undefined4 *)(IVar1 + port) = 0;
  }
  return IVar1;
}

