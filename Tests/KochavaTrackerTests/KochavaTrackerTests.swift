
import XCTest

@testable import KochavaTracker



final class KochavaTrackerTests: XCTestCase
{
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        KVATrackerProduct.shared.register()
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



