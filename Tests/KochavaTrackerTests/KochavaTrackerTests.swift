
import XCTest

@testable import KochavaTracker



final class KochavaTrackerTests: XCTestCase
{
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        print("KochavaCore=\(String(describing: KVACoreProduct.shared.kva_asForContextObject(withContext: .log) as? [AnyHashable: Any]))")
        
        KVATrackerProduct.shared.register()
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



