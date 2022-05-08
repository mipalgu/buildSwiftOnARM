diff --git a/include/swift/AST/Expr.h b/include/swift/AST/Expr.h
index 77695508386..719513b494f 100644
--- a/include/swift/AST/Expr.h
+++ b/include/swift/AST/Expr.h
@@ -3306,7 +3306,7 @@ public:
   /// this array will be empty
   ArrayRef<ConversionPair> getArgumentConversions() const {
     return {getTrailingObjects<ConversionPair>(),
-            Bits.ErasureExpr.NumArgumentConversions };
+            static_cast<size_t>(Bits.ErasureExpr.NumArgumentConversions) };
   }
 
   /// Retrieve the conversion expressions mapping requirements from any
@@ -3316,7 +3316,7 @@ public:
   /// this array will be empty
   MutableArrayRef<ConversionPair> getArgumentConversions() {
     return {getTrailingObjects<ConversionPair>(),
-            Bits.ErasureExpr.NumArgumentConversions };
+            static_cast<size_t>(Bits.ErasureExpr.NumArgumentConversions) };
   }
 
   void setArgumentConversion(unsigned i, const ConversionPair &p) {
