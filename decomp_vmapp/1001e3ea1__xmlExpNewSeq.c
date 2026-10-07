
xmlExpNodePtr _xmlExpNewSeq(xmlExpCtxtPtr ctxt,xmlExpNodePtr left,xmlExpNodePtr right)

{
  undefined8 local_28;
  
  if (((ctxt == (xmlExpCtxtPtr)0x0) || (left == (xmlExpNodePtr)0x0)) ||
     (right == (xmlExpNodePtr)0x0)) {
    _xmlExpFree(ctxt,left);
    _xmlExpFree(ctxt,right);
    local_28 = (xmlExpNodePtr)0x0;
  }
  else {
    local_28 = (xmlExpNodePtr)FUN_1001e3261(ctxt,3,left,right,0,0,0);
  }
  return local_28;
}

